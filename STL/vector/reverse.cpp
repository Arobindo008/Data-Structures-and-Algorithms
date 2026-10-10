#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &ar)
{
    int first = 0, last = ar.size() - 1;
    while (first < last)
    {
        swap(ar[first++], ar[last--]);
    }
}

int main()
{
    vector<int> ar = {1, 2, 3, 4, 5};
    reverse(ar);
    for (auto x : ar)
    {
        cout << x << " ";
    }
    cout << endl;
}