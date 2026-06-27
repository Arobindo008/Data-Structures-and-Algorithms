#include <iostream>
#include <climits>
using namespace std;

int smallest_ele(int arr[], int n)
{
    int smallest = __INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int largest_ele(int arr[], int n)
{
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {12, 4, 2, 0, -1, 134};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"smallest: "<< smallest_ele(arr, n) << endl;
    cout <<"largest: "<< largest_ele(arr, n) << endl;
}