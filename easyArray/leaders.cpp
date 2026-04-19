#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int> &arr)
{
    vector<int> temp;
    for (int i = 0; i < arr.size(); i++)
    {
        int j;
        for (j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
                break;
        }
        if (j == arr.size())
            temp.push_back(arr[i]);
    }
    return temp;
}

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for (auto x : result)
        cout << x << " ";
    cout << endl;
}