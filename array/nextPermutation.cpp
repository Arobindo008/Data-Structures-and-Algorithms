#include <iostream>
#include <vector>
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
        int i = 0, j = n - 1;
        while (i <= j)
        {
            swap(ar[i++], ar[j--]);
        }
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
    vector<int> ar = {3, 2, 1};
    nextPermutation(ar);
    for (auto x : ar)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}