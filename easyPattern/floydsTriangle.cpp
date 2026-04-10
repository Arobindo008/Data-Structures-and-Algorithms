#include <iostream>
using namespace std;
int main()
{
    int n, val = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << val << " ";
            val++;
        }
        cout << endl;
    }
    cout << endl;
}