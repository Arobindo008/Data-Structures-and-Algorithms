
#include <iostream>
#include <vector>
using namespace std;

int majorityEle(vector<int> ar)
{
    for (int i = 0; i < ar.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < ar.size(); j++)
        {
            if (ar[i] == ar[j])
            {
                count++;
            }
        }
        if (count > ar.size() / 2)
        {
            return ar[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> ar = {1, 2, 1, 2, 1, 1};
    cout << majorityEle(ar) << endl;
    return 0;
}