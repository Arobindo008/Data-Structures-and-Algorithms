#include <iostream>
#include <vector>
using namespace std;

int majorEle(vector<int> ar)
{
    int count = 0, ans = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        if (count == 0)
        {
            ans = ar[i];
        }
        if (ans == ar[i])
        {
            count++;
        }
        else
            count--;
    }
    int freq = 0;
    for (auto x : ar)
    {
        if (x == ans)
        {
            freq++;
        }
        
    }
    if (freq > ar.size() / 2)
    {
        return ans;
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> ar = {1, 2, 3, 1, 2};
    cout << majorEle(ar) << endl;
    return 0;
}