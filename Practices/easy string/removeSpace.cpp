#include <iostream>
using namespace std;

string removeSpace(string s)
{
    string res;

    for (auto ch : s)
    {
        if (ch != ' ')
        {
            res += ch;
        }
    }
    return res;
}

int main()
{
    string s = "ab c d";
    cout << removeSpace(s) << endl;
}