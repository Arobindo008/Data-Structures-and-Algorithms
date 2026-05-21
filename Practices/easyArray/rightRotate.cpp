#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr, int d)
{
    int n = arr.size();
    int rotation = 0;
    int lastEle;
    while (rotation < d)
    {
        lastEle = arr[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        rotation++;
        arr[0] = lastEle;
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