#include <iostream>
using namespace std;

int main()
{
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    int dif{a2 - a1}, res = a1;
    for (int i = 1; i < n; i++)
    {
        res += dif;
    }
    cout << res << endl;
}