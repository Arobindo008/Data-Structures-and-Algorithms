#include <iostream>
using namespace std;

int main()
{
    int n, m, minDif = __INT_MAX__, closest = 0;
    cin >> n >> m;
    for (int i = n - abs(m); i <= n + abs(m); i++)
    {
        if (i % m == 0)
        {
            int dif = abs(n - i);
            if (dif < minDif || (dif == minDif && abs(i) > abs(closest)))
            {
                closest = i;
                minDif = dif;
            }
        }
    }
    cout << closest << endl;
}