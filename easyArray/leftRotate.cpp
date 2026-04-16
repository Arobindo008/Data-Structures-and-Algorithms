#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr, int d)
{
    int n = arr.size();
    int firstEle;
    for (int i = 0; i < d; i++)
    {
        firstEle = arr[0];
        for (int j = 0; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = firstEle;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 2;
    rotate(arr, d);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}