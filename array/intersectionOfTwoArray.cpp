#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int> ar1, vector<int> ar2)
{
    vector<int> res;
    for (int i = 0; i < ar1.size(); i++)
    {
        for (int j = 0; j < ar2.size(); j++)
        {
            if (ar1[i] == ar2[j])
            {
                res.push_back(ar1[i]);
            }
        }
    }
    return res;
}

int main()
{
    vector<int> ar1 = {1, 2, 3, 5, 6, 8};
    vector<int> ar2 = {2, 3, 7, 8};
    vector<int> res = intersection(ar1, ar2);
    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << endl;
}