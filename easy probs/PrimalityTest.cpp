#include <iostream>
using namespace std;

bool primalityTest(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (primalityTest(n))
    {
        cout << "True\n";
    }
    else
        cout << "False\n";
}