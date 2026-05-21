#include <iostream>
using namespace std;

bool subSeq(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    int i, j = 0;
    if (n > m)
        return false;
    while (i < n && j < m)
    {
        if (s1[i] == s2[j])
            i++;

        j++;
    }
    return i == n;
}

int main()
{
    string s1 = "axy", s2 = "adxcpy";
    subSeq(s1, s2) ? cout << "True\n" : cout << "false\n";
}