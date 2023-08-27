#include <iostream>
using namespace std;
int unique(int arr[], int size)
{
    int ans = 0;
    for(int i = 0; i < size; ++i)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[10000], size;
    cout << "Enter size of the array:";
    cin >> size;
    cout << "Enter " << size << " numbers:";
    for (int i = 0; i < size; ++i)
        cin >> arr[i];
    cout<<"Unique Element in the array is "<<unique(arr,size);
}