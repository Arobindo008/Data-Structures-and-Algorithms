#include <iostream>
using namespace std;

// reverse iteration
//  string strRev(string s){
//      string temp;
//      for(int i=s.length()-1;i>=0;i--){
//          temp+=s[i];
//      }
//      return temp;
//  }

// two pinters
string strRev(string s)
{
    int left = 0, right = s.length()-1;
    while (left < right)
    {
        swap(s[left++], s[right--]);
    }
    return s;
}

int main()
{
    string s = "abc";
    cout << strRev(s) << endl;
}