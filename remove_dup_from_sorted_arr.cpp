#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size()==0) return 0;
    int i = 0; 
    for(int j = 1 ; j < nums.size() ; j++)
    {
        if(nums[j] != nums[i])
        i++;
    nums[i] = nums[j];
    }
    return i+1;
}

int main()
{
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
    int k = removeDuplicates(nums);

    cout << "Unique elements: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << "\nLength = " << k << endl;
}