#include <iostream>
#include <vector>
using namespace std;

void rearrange(vector<int> &arr)
{
    vector<int> pos, neg;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    int posIdex = 0, negIdex = 0;
    int i = 0;
    while (posIdex < pos.size() && negIdex < neg.size())
    {
        if (i % 2 == 0)
        {
            arr[i] = pos[posIdex];
            i++;
            posIdex++;
        }
        else
        {
            arr[i] = neg[negIdex];
            i++;
            negIdex++;
        }
    }
    while (posIdex < pos.size())
    {
        arr[i] = pos[posIdex];
        i++;
        posIdex++;
    }
    while (negIdex < neg.size())
    {
        arr[i] = neg[negIdex];
        i++;
        negIdex++;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, -4, -1, 4};
    rearrange(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}