#include <iostream>
using namespace std;

char checkRepeat(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        bool found = false;
        for (int j = 0; j < s.length(); j++)
        {
            if (i != j && s[i] == s[j])
            {
                found = true;
                break;
            }
        }
        if (found == false)
            return s[i];
    }
    return '$';
}

int main()
{
    string s = "geeksforgeeks";
    cout << checkRepeat(s) << endl;
}