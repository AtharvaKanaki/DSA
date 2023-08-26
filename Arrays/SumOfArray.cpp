#include<iostream>
using namespace std;
int SumOfArray(int arr[],int n)
{
    int sum = 0;
    for(int i  = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[10000],size;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter "<<size<<" numbers:";
    for(int i = 0; i < size; ++i)
        cin>>arr[i];
    cout<<"The Sum of all the elements of array is "<<SumOfArray(arr,size);
}