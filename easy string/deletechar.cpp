#include <iostream>
using namespace std;

string deleteChar(string s, char c)
{
    string newStr;
    for (char ch : s)
    {
        if (ch != c)
            newStr.push_back(ch);
    }
    return newStr;
}

int main()
{
    string s = "AroBabu";
    char c = 'r';
    cout << deleteChar(s, c) << endl;
}