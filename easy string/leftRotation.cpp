#include <iostream>
using namespace std;

void rotation(string &s, int d)
{
    int n = s.length();
    for (int i = 0; i < d; i++)
    {
        int first = s[0];
        for (int j = 0; j < n; j++)
        {
            s[j] = s[j + 1];
        }
        s[n - 1] = first;
    }
    
}

int main()
{
    string s = "arobabu";
    int d = 2;
    rotation(s, d);
    cout << s << endl;
}