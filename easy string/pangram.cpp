#include <iostream>
using namespace std;

bool check(string s)
{
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        bool found = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (ch == tolower(s[i]))
            {
                found = true;
                break;
            }
        }
        if (found == false)
            return false;
    }
    return true;
}

int main()
{
    string s = "The quick brown fox jumps over the lazy dog ";
    check(s) ? cout << "True\n" : cout << "False\n";
}