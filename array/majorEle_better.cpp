#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityEle(vector<int> ar)
{
    int count = 1, ans = ar[0];
    sort(ar.begin(), ar.end());
    for (int i = 1; i < ar.size(); i++)
    {
        if (ar[i] == ar[i - 1])
            count++;
        else
        {
            count = 1;
            ans = ar[i];
        }
        if (count > ar.size() / 2)
            return ar[i];
    }
    return -1;
}

int main()
{
    vector<int> ar = {2,1, 2, 1, 2, 1, 1};
    cout << majorityEle(ar) << endl;
    return 0;
}