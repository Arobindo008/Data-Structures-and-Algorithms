#include <iostream>
#include <vector>
using namespace std;

// using 1 pointer

void reverse(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}

// using temp
/*void reverse(vector<int> &arr)
{
    int n = arr.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
*/
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    reverse(arr);
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}

// using 2 pointers
/*void reverse(vector<int> &arr)
{
    int n = arr.size();
    int left = 0, right = n - 1;
    while (left < right)
    {
        swap(arr[left++], arr[right--]);
    }
}

int main()
{
    vector<int> arr = {2, 4, 5, 6, 7};
    reverse(arr);
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}
*/