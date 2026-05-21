#include <iostream>
#include <vector>
using namespace std;

void arrayReverse(vector<int> &arr, int n)
{
    // vector<int> temp(n);
    // for (int i = 0; i < n; i++)
    // {
    //     temp[i] = arr[n - i - 1];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = temp[i];
    // }

    // two pointers
    int left = 0, right = n - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    vector<int> arr = {1, 3, 5, 6, 2};
    arrayReverse(arr, arr.size());
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}