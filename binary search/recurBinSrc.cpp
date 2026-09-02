#include <iostream>
#include <vector>
using namespace std;

int rbs(vector<int> arr, int tar, int st, int end)
{

    if (st > end)
        return -1;

    int mid = st + (end - st) / 2;

    if (tar > arr[mid])
    {
        return rbs(arr, tar, mid + 1, end);
    }
    else if (tar < arr[mid])
    {
        return rbs(arr, tar, st, mid - 1);
    }
    else
        return mid;
}

int main()
{
    vector<int> arr = {-1, 0, 3, 5, 6, 7, 12};
    int target = 1, st = 0, end = arr.size() - 1;
    cout << rbs(arr, target, st, end) << endl;
    return 0;
}