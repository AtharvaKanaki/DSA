#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key)
{
    for(int i =0; i < n; ++i)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10000],size,key;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter "<<size<<" numbers:";
    for(int i = 0; i < size; ++i)
        cin>>arr[i];
    cout<<"Enter the number to search in the array:";
    cin>>key;
    if(linearSearch(arr,size,key))
    {
        cout<<" "<<key<<" is PRESENT in array.";
    }
    else
    {
        cout<<" "<<key<<" is ABSENT in array.";
    }
}