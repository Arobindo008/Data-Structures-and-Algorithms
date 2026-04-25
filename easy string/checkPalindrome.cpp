#include <iostream>
using namespace std;

int palindrome(string s)
{
    int left = 0, right = s.size() - 1;
    while (left <= right)
    {
        if (s[left++] != s[right--])
            return 0;
    }
    return 1;
}

int main()
{
    string s = "nan";
    int res = palindrome(s);
    if (res)
        cout << "yes\n";
    else
        cout << "no\n";
}