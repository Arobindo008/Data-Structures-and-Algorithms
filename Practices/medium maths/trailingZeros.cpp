#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int check(int n)
{
    int x = fact(n);
    int count = 0;
    while (x != 0)
    {
        int temp = x % 10;
        if (temp == 0)
            count++;
        x /= 10;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << check(n) << endl;
}