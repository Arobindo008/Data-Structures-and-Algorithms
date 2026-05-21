#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i += k)
    {
        int left = i;
        int right = min(i + k - 1, n - 1);
        while (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    // vector<int> arr={1,2,3,4};
    int k = 5;
    reverse(arr, k);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}