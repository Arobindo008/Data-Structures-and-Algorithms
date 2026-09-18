#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i], prev = i - 1;
        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
}

int main()
{
    int arr[] = {1, 4, 5, 2,7,6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}