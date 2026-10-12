#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // pair<int,char> p ={2,'a'};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    pair<int, pair<int, string>> p = {1, {2, "arobindo"}};
    cout << p.first << endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    return 0;
}