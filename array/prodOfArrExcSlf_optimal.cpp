#include <iostream>
#include <vector>
using namespace std;

vector<int> product(vector<int> arr)
{
    vector<int> ans(arr.size(), 1), prefix(arr.size(), 1), sufix(arr.size(), 1);
    for (int i = 1; i < arr.size(); i++)
    {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        sufix[i] = sufix[i + 1] * arr[i + 1];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans[i] = prefix[i] * sufix[i];
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<int> res = product(arr);
    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}