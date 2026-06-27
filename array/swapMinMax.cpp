#include <iostream>
#include <climits>
using namespace std;

void swapMinMax(int arr[], int n)
{
    int smallIdx, largeIdx, small = INT_MAX, large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            smallIdx = i;
        }
        if (arr[i] > large)
        {
            large = arr[i];
            largeIdx = i;
        }
    }
    swap(arr[smallIdx], arr[largeIdx]);
}

int main()
{
    int arr[] = {12, 4, 6, -1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    swapMinMax(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}