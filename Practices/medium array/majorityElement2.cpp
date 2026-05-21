#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > n / 3)
        {
            if (res.size() == 0 || arr[i] != res[0])
                res.push_back(arr[i]);
        }
        if (res.size() == 2)
        {
            if (res[0] > res[1])
                swap(res[0], res[1]);
            break;
        }
    }
    return res;
}

int main()
{
    vector<int> ar = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> res = majorityElement(ar);
    for (auto x : res)
        cout << x << " ";
    cout << endl;
}