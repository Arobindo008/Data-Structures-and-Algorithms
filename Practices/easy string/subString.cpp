#include <iostream>
using namespace std;

int subString(string s, string ch)
{
    int n = s.size();
    int m = ch.size();
    for (int i = 0; i < n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (s[i + j] != ch[j])
                break;
        }
        if (j == m)
            return i;
    }
    return 0;
}

int main()
{
    string s = "arobindo";
    string ch = "in";
    int res = subString(s, ch);
    if (res)
        cout << "Found at index: " << res << endl;
    else
        cout << "Not Found.\n";
}