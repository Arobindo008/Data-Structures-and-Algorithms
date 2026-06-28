// Rearrange array such that even positioned are greater than odd
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// assign max elements to even positions
// vector<int> rearrange(vector<int> arr)
// {
//     int n = arr.size();
//     vector<int> ans(n);
//     int ptr1 = 0, ptr2 = n - 1;
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < n; i++)
//     {
//         if ((i + 1) % 2 == 0)
//         {
//             ans[i] = arr[ptr2--];
//         }
//         else
//             ans[i] = arr[ptr1++];
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 2, 1};
//     vector<int> res = rearrange(arr);
//     for (auto x : res)
//         cout << x << " ";
//     cout << endl;
// }

// using swapping
void rearrange(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            if (arr[i] < arr[i - 1])
                swap(arr[i], arr[i - 1]);
        }
        else
        {
            if (arr[i] > arr[i - 1])
                swap(arr[i], arr[i - 1]);
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5 };
    rearrange(arr);
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}