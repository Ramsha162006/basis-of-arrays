#include<iostream>
using namespace std;

int largestElement(int arr[],int n)
{
    int largest = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i = 0 ; i<n ;i++)
    {
        cin>>arr[i];
    }
    int result = largestElement(arr,n);
    cout<<"the largest element is : " <<result<<endl;
}