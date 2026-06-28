#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int totalOp(vector<int> arr, int k)
{
    int max = *max_element(arr.begin(), arr.end());
    int res = 0;
    for (auto x : arr)
    {
        if ((max - x) % k != 0)
            return -1;
        else
            res += (max - x) / k;
    }
    return res;
}

int main()
{
    vector<int> arr = {4, 7, 19, 16};
    int k = 3;
    int res = totalOp(arr, k);
    cout << res << endl;
}