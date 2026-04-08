#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr, int n)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = 70;
    int res = search(arr, n);
    if (res == -1)
    {
        cout << "Element not found.\n";
    }
    else
        cout << "Element fount at index: " << res << endl;
}