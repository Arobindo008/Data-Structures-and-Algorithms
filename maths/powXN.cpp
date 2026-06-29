#include <iostream>
#include <vector>
using namespace std;

double pow(double x, int n)
{
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;
    long binForm = n;
    double ans = 1;
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    double x = -1;
    int n = -2;
    cout << pow(x, n) << endl;
    return 0;
}