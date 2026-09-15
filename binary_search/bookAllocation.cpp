#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &ar, int n, int m, int maxAllowedPages)
{

    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > maxAllowedPages)
            return false;
        if (pages + ar[i] <= maxAllowedPages)
        {
            pages += ar[i];
        }
        else
        {
            students++;
            pages = ar[i];
        }
    }
    return students <= m ? true : false;
}

int bookAllocation(vector<int> ar, int m)
{
    int n = ar.size();
    if (m > n)
        return -1;
    int st = 0, sum = 0, ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    int end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(ar, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> ar = {22, 23, 67};
    int m = 1;
    cout << bookAllocation(ar, m) << endl;

    return 0;
}