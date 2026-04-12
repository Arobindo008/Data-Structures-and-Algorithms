#include <iostream>
using namespace std;

// naive approach
// int gcd(int a, int b)
// {
//     if (a == 0 || b == 0)
//         return max(a, b);
//     int result = min(a, b);
//     while (result > 0)
//     {
//         if (a % result == 0 && b % result == 0)
//         {
//             break;
//         }
//         result--;
//     }
//     return result;
// }

// recursive(euclidian approach)
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
    {
        if (a % b == 0)
            return b;
       return gcd(a - b, b);
    }
    else
    {
        if (b % a == 0)
            return a;
       return gcd(a, b - a);
    }
}

int main()
{
    int a = 20, b = 28;
    cout << gcd(a, b) << endl;
    ;
}