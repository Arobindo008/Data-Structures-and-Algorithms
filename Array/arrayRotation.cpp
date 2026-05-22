#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr, int d)
{
    int n = arr.size();
    // left rotation
    for (int i = 0; i < d; i++)
    {
        int first = arr[0];
        for (int j = 0; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }

    // right roatation
    //  for (int i = 0; i < d; i++)
    //  {
    //      int last = arr[n - 1];
    //      for (int j = n - 1; j >= 0; j--)
    //      {
    //          arr[j] = arr[j - 1];
    //      }
    //      arr[0] = last;
    //  }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 2;
    rotate(arr, d);
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}