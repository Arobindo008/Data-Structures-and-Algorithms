
#include <iostream>
using namespace std;

// Naive approach
//  bool isEven(int n){
//      if(n%2==0)
//         return true;
//      else return false;
//  }

// Efficent approach
bool isEven(int n)
{
    if ((n & 1) == 0)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    if (isEven(n))
        cout << "True.\n";
    else
        cout << "False.\n";
}
