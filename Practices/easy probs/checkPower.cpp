#include <iostream>
using namespace std;
bool checkPrime(int x, int y)
{
    if (x == 1)
        return y == 1;
    int pow = 1;
    while (pow < y)
    {
        pow *= x;
    }
    return pow == y;
}
int main()
{
    int x, y;
    cin >> x >> y;
    if (checkPrime(x, y))
        cout << "True\n";
    else
        cout << "False\n";
}