#include <iostream>
using namespace std;

int check(string s1, string s2)
{
    if (s1 == s2)
        return 1;
    else
        return 0;
}

int main()
{
    string s1 = "aro";
    string s2 = "aro";
    int res = check(s1, s2);
    if (res)
        cout << "yes\n";
    else
        cout << "No\n";
}