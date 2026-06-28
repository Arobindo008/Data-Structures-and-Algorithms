#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> ar, int target)
{
    vector<int> res;
    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = i + 1; j < ar.size(); j++)
        {
            if (ar[i] + ar[j] == target)
            {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    return res;
}

int main()
{
    vector<int> ar = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = pairSum(ar, target);
    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << endl;
}