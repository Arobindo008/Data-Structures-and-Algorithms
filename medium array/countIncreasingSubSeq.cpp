#include <iostream>
#include <vector>
using namespace std;

int subSeq(vector<int> arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j - 1] >= arr[j])
            {
                break;
            }
            count++;
        }
    }
    return count;
}

int main()
{   
    vector<int> arr = {1, 3, 3, 2, 3, 5};
    cout << subSeq(arr) << endl;
}