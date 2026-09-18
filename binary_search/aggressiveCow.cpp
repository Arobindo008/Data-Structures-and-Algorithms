#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int c, int n, int minAllowedDis)
{
    int cows = 1, lastStallPoss = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastStallPoss >= minAllowedDis)
        {
            cows++;
            lastStallPoss = arr[i];
        }
        if (cows == c)
            return true;
    }
    return false;
}

int bs(vector<int> &arr, int c)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int st = 1, end = arr[n - 1] - arr[0], ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, c, n, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int c = 3;
    cout << bs(arr, 3) << endl;
    return 0;
}