#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char str[] = "Arobindo";
    // cin.getline(str, 5);
    int len = 0;
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        len++;
    }
    cout<<len<<endl;
    // loop
    //  for(auto ch: str){
    //      cout<<str<<endl;
    //  }

    // cout << str << endl;
    return 0;
}