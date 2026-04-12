#include <iostream>
#include <math.h>
using namespace std;

// double power(double b, int e)
// {
//     if (e == 0)
//         return 1;
//     double pow = 1;
//     for (int i = 0; i < abs(e); i++)
//     {
//         pow *= b;
//     }
//     if (e < 0)
//         return 1 / pow;

//     return pow;
// }

// recursive approach

// double power(double b, int e)
// {
//     if (e == 0)
//         return 1;
//     if (e < 0)
//         return 1 / power(b, -e);
//     return b * power(b, e - 1);
// }

// divide and conquer
double power(double b, int e)
{
    if (e == 0)
        return 1;
    if (e < 0)
        return 1 / power(b, -e);
    double temp = power(b, e / 2);
    if (e % 2 == 0)
        return temp * temp;
    else
        return b * temp * temp;
}

int main()
{
    double b = 3;
    int e = 5;
    cout << power(b, e) << endl;
}