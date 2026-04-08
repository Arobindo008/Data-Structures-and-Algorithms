#include <iostream>
using namespace std;

int sumOfNum(int n)
{

    if (n == 1)
        return 1;
    else
        return n + sumOfNum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "Sum of " << n << " is " << sumOfNum(n) << endl;
}