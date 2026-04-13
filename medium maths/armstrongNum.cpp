#include <iostream>
#include <math.h>
using namespace std;
int checkCount(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int check(int n)
{
    cout << n << " ";
    int count = checkCount(n);
    int result = 0;
    while (n != 0)
    {
        int temp = n % 10;
        int x = pow(temp, count);
        result = result + pow(temp, count);
        n /= 10;
    }
    cout << result << endl;
    return result;
}

int main()
{
    int n = 153;
    cout << endl;
    cout << endl;
    if (n == check(n))
        cout << "True\n";
    else
        cout << "False\n";
}