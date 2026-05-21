#include <iostream>
using namespace std;

int search(string s, char ch)
{
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] == ch)
    //         return i;
    // }
    // return 0;
    size_t res = s.find(ch);
    if (res != string::npos)
        return res;
    else
        return 0;
}

int main()
{
    string s = "Arobindo";
    char ch = 'i';
    int res = search(s, ch);
    if (res)
        cout << "Found at idx: " << res << endl;
    else
        cout << "Not found\n";
}