#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 5, 8, 10, 12, 15, 19, 31, 34};
    int x = 12;
    int res{binarySearch(arr, x)};
    if (res == -1)
    {
        cout << "Elemnet not found.\n";
    }
    else
        cout << x << " is found at index " << res << endl;
}
