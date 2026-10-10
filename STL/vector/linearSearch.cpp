#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ar = {1, 2, 3, 4, 5, 6, 7};
    int target = 5;
    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] == target)
        {
            cout << "found at idx: "
                 << i << endl;
        }
    }
}