#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 12, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}