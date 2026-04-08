#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int x, int low, int high)
{
    int mid{(low + high) / 2};
    while (low <= high)
    {
        if (arr[mid] == x)
            return mid;
        else if (arr[mid]>x)
            return binarySearch(arr, x, low, mid - 1);
        else
            return binarySearch(arr, x, mid + 1, high);
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 12, 23, 34, 45, 56, 78};
    int x = 34;
    int res{binarySearch(arr, x, 0, arr.size() - 1)};
    if (res == -1)
        cout << "Element not found.\n";
    else
        cout << x << " is at index " << res << endl;
}