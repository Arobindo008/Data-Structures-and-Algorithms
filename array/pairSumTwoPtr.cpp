#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> ar, int target)
{
    vector<int> res;
    int n = ar.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int ps = ar[i] + ar[j];
        if (ps > target)
        {
            j--;
        }
        else if (ps < target)
        {
            i++;
        }
        else
        {
            res.push_back(i);
            res.push_back(j);
            i++;
            j--;
        }
    }
    return res;
}
int main()
{
    vector<int> ar = {2, 7, 11, 15};
    int target = 13;
    vector<int> res = pairSum(ar, target);
    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << endl;
}