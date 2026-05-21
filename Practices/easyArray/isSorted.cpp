#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    // int arr[] = {90, 80, 100, 70, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, n))
        cout << "Sorted\n";
    else
        cout << "Not sorted\n";
}