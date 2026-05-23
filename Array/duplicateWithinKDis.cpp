#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// using hashset
//  bool findDuplicate(vector<int> arr, int k)
//  {
//      unordered_set<int> s;
//      for (int i = 0; i < arr.size(); i++)
//      {
//          if (s.find(arr[i]) != s.end())
//              return true;
//          s.insert(arr[i]);
//          if (i >= k)
//              s.erase(arr[i - k]);
//      }
//      return false;
//  }

// using brute force
bool findDuplicate(vector<int> arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int c = 1; c <= k && c + i < n; c++)
        {
            int j = c + i;
            if (arr[i] == arr[j])
                return true;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 21, 4, 5};
    int k = 3;
    if (findDuplicate(arr, k))
        cout << "yes\n";
    else
        cout << "No\n";
}