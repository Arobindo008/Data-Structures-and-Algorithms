#include <iostream>
#include <vector>
using namespace std;

int binSrc(vector<int> ar)
{
    int st = 1, end = ar.size() - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (ar[mid - 1] < ar[mid] && ar[mid] > ar[mid + 1])
            return mid;
        if (ar[mid - 1] < ar[mid])
            st = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> ar = {0, 3, 8, 9, 5, 2};
    cout << binSrc(ar) << endl;
    return 0;
}