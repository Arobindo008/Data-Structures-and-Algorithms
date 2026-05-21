#include <iostream>
using namespace std;

void recur(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    recur(n - 1);
    cout << endl;
}

int main()
{
    int n;
    cin>>n;
    recur(n);
}