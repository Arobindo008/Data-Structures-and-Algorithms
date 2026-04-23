#include <iostream>
using namespace std;

// string insertChar(string s, char c, int pos)
// {
//     string res;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (i == pos)
//         {
//             res.push_back(c);
//         }
//         res.push_back(s[i]);
//     }
//     return res;
// }

// in built method

string insertChar(string s, char c, int pos)
{
    s.insert(s.begin() + pos, c);
    return s;
}

int main()
{
    string s = "Aroabu";
    char c = 'B';
    int pos = 3;
    cout << insertChar(s, c, pos) << endl;
}