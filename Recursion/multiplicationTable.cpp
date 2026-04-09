#include <iostream>
using namespace std;

void multiTable(int n, int i = 1)
{
    if (i == 11)
        return;
    else
        cout << n << "*" << i << "=" << n * i << endl;
    i++;
    multiTable(n, i);
}

int main()
{
    int n;
    cin >> n;
    multiTable(n);
}