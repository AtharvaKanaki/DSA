#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i = 0; i < n; ++i)
        cout<<arr[i]<<" ";
}
int arrayReversal(int arr[],int n)
{
    int start = 0,end = (n - 1);
    while(start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[1000],size;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter "<<size<<" numbers:";
    for(int i = 0; i < size; ++i)
        cin>>arr[i];
    arrayReversal(arr,size);
    printArray(arr,size);
    return 0;
}