#include <iostream>
#include <vector>
using namespace std;

int binSrc(vector<int> ar)
{
    int n = ar.size();
    int st = 0, end = n - 1;
    if (n == 1)
        return ar[0];
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mid == 0 && ar[0] != ar[1])
            return ar[mid];
        if (mid == n - 1 && ar[n - 1] != ar[n - 2])
            return ar[mid];
        if (ar[mid - 1] != ar[mid] && ar[mid + 1] != ar[mid])
            return ar[mid];
        if (mid % 2 == 0) //explain the term here with example
        {
            if (ar[mid - 1] == ar[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }
        else //explain the term here with example 
        {
            if (ar[mid - 1] == ar[mid])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> ar = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << binSrc(ar) << endl;
    return 0;
}