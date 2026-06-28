// Minimum cost to make array size 1 by removing larger of pairs

#include <bits/stdc++.h>
using namespace std;

int miniCost(vector<int> arr)
{
    int n = arr.size();
    return (n - 1) * (*min_element(arr.begin(), arr.end()));
}

int main()
{
    vector<int> arr = {4, 3, 2};
    cout << miniCost(arr) << endl;
}
