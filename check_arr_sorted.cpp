#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>&nums,int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        if(nums[i]<nums[i-1])
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(8);
    nums.push_back(7);
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(4);

if(isSorted(nums,nums.size())){
    cout<<"array is sorted"<<endl;
}
else{
    cout<<"array is unsorted"<<endl;
}
}