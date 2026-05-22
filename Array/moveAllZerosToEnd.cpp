#include <iostream>
#include <vector>
using namespace std;

void moveZero(vector<int> &arr)
{
    int n = arr.size();
    // using one trversal

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count++]);
        }
    }

    // using two traversal
    //     int count = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] != 0)
    //             arr[count++] = arr[i];
    //     }
    //    while(count<n){
    //     arr[count++]=0;
    //    }

    // using temp
    //  vector<int> temp(n);
    //  int j=0;
    //  for (int i = 0; i < n; i++)
    //  {
    //      if (arr[i] != 0)
    //         temp[j++]=arr[i];
    //  }
    //  for (int i = 0; i < n; i++)
    //  {
    //      if (temp[i] == -1)
    //          temp.push_back(0);
    //  }
    //  for (int i = 0; i < n; i++)
    //  {
    //      arr[i] = temp[i];
    //  }
}

int main()
{
    vector<int> arr = {1, 2, 0, 0, 3, 0, 5, 0};
    moveZero(arr);
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}