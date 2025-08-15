#include<iostream>
using namespace std;
 
void rotateArraybyone(int nums[],int n)
{
    if(n == 0)
    return;
int temp = nums[n-1];
for(int i =n-1 ; i>0; i-- )
{
    nums[i] = nums[i-1];

}
nums[0] = temp;
}
int main()
{
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i = 0 ;i<n;i++){
    cin>>arr[i];}
     rotateArraybyone(arr,n);
    cout<<"Rotated array : ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}