#include <iostream>
#include <vector>
using namespace std;

vector<int> product(vector<int> arr)
{
    vector<int> ans(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j)
            {
                product *= arr[j];
            }
        }
        ans[i] = product;
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
    cout<<endl;
    return 0;
}