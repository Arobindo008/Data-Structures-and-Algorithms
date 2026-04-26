#include <iostream>
using namespace std;

string removeOccur(string s, int c)
{
    string temp;
    for (auto ch : s)
    {
        if (ch != c)
        {
            temp += ch;
        }
    }
    return temp;
}

int main()
{
    string s = "geeksforgeeks";
    char c = 'e';
    cout << removeOccur(s, c) << endl;
}