#include<iostream>
using namespace std;
int getMax(int arr[],int n)
{ 
    int max = INT_MIN;
    for(int i = 0; i < n; ++i)
    {
        if(max <= arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int n)
{
    int min = INT_MAX;
    for(int i = 0; i < n; ++i)
    {
        if(min >= arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[10000],size;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter "<<size<<" numbers:";
    for(int i = 0; i < size; ++i)
        cin>>arr[i];
    cout<<"The Maximum value is "<<getMax(arr,size)<<endl;
    cout<<"The Minimum value is "<<getMin(arr,size)<<endl;
}