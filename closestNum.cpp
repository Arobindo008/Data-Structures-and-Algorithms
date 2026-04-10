#include <iostream>
#include <math.h>
using namespace std;

// naive approach
//  int closestNum(int n, int m)
//  {
//      int closest = 0;
//      int minDiff = __INT_MAX__;
//      for (int i = n - abs(m); i <= n + abs(m); i++)
//      {
//          if (i % m == 0)
//          {
//              int diff = abs(n - i);
//              if (diff < minDiff || diff == minDiff && abs(i) > abs(closest))
//              {
//                  closest = i;
//                  minDiff = diff;
//              }
//          }
//      }
//      return closest;
//  }

// efficent approach
int closestNum(int n, int m)
{
    int q = n / m;
    int n1 = m * q;
    int n2 = (n * m > 0 ? m * (q + 1) : m * (q - 1));
    if (abs(n - n1) < abs(n - n2))
    {
        return n1;
    }
    else
        return n2;
}

int main()
{
    int n = -15, m = 6;
    cout << closestNum(n, m) << endl;
}