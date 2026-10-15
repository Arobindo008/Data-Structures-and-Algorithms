#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string str = "arobindo";
    int st = 0;
    int end = str.length() - 1;
    while (st < end)
    {
        swap(str[st++], str[end--]);
    }
    cout << str << endl;
    return 0;
}