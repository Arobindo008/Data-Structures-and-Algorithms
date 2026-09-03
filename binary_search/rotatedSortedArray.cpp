#include <iostream>
#include <vector>
using namespace std;

int binSrc(vector<int> ar, int tar)
{
    int st = 0, end = ar.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (ar[mid] == tar)
        {
            return mid;
        }
        if (ar[st] <= ar[mid])
        {
            if (ar[st] <= tar && tar <= ar[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (ar[mid] <= tar && tar <= ar[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> ar = {3, 1};
    int target = 1;
    cout << binSrc(ar, target) << endl;
    return 0;
}