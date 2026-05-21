#include <iostream>
using namespace std;
// recursive way
//  int fact(int n)
//  {
//      if (n == 1)
//          return 1;
//      else
//          return n * fact(n - 1);
//  }

// naive way
int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int n = 5;
    cout << fact(n) << endl;
}