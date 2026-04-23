#include <iostream>
using namespace std;

string deleteAtPos(string s, int pos)
{
    s.erase(pos, 1);
    return s;
}

int main()
{
    string s = "Arobabu";
    int pos = 3;
    cout << deleteAtPos(s, pos) << endl;
}