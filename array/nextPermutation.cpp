#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &ar)
{
    int n = ar.size();
    int piv = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (ar[i] < ar[i + 1])
        {
            piv = i;
            break;
        }
    }
    if (piv == -1)
    {
        // int i = 0, j = n - 1;
        // while (i <= j)
        // {
        //     swap(ar[i++], ar[j--]);
        // }
        reverse(ar.begin(), ar.end());
        return;
    }
    for (int i = n - 1; i > piv; i--)
    {
        if (ar[i] > ar[piv])
        {
            swap(ar[i], ar[piv]);
            break;
        }
    }
    int i = piv + 1, j = n - 1;
    while (i <= j)
    {
        swap(ar[i++], ar[j--]);
    }
}

int main()
{
    vector<int> ar = {1,2,3};
    nextPermutation(ar);
    for (auto x : ar)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}