#include <iostream>
using namespace std;

int checkSize(string s)
{
    int i = 0, count = 0;
    while (s[i])
    {
        i++;
        count++;
    }
    return count;
}

int main()
{
    string s = "hello world";
    cout << checkSize(s) << endl;

    // cout<<s.size()<<endl;
}