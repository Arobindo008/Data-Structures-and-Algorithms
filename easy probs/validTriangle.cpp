#include <iostream>
using namespace std;
bool isValid(int a, int b, int c)
{
    if ((a + b) > c && (b + c) > a && (a + c) > b)
        return true;

    else
        return false;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (isValid(a, b, c))
        cout << "Valid\n";
    else
        cout << "Invalid\n";
}