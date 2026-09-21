#include<iostream>
#include <vector>
    using namespace std;

void DNF(int arr[], int n)
{
    int mid = 0, low = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    DNF(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}