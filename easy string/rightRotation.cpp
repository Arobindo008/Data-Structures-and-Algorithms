#include <iostream>
using namespace std;

void rotation(string &s, int d)
{
    for (int i = 0; i < d; i++)
    {
        int last = s[s.size() - 1];
        for (int j = s.size() - 1; j >= 0; j--)
        {
            s[j] = s[j-1];
        }
        s[0] = last;
    }
}

int main()
{
    string s = "arobabu";
    int d = 2;
    rotation(s, d);
    cout << s << endl;
}