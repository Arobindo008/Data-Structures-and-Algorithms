#include <iostream>
#include <cctype>
using namespace std;

string toggle(string &s)
{
    string res;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            res += tolower(s[i]);
        }
        if (islower(s[i]))
        {
            res += toupper(s[i]);
        }
    }
    return res;
}

int main()
{
    string s = "AroBinDo";
    cout << toggle(s) << endl;
}