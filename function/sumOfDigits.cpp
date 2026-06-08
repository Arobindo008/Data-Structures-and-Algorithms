#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastDigits = n % 10;
        n /= 10;
        sum += lastDigits;
    }
    return sum;
}

int main()
{
    int n = 123;
    cout << sum(n) << endl;
}