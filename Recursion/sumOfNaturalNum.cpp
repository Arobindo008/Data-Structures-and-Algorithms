#include <iostream>
using namespace std;

// int sumOfNum(int n)
// {

//     if (n == 1)
//         return 1;
//     else
//         return n + sumOfNum(n - 1);
// }

//Efficent way
int sumOfNum(int n){
    int sum= n*(n+1)/2;
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << "Sum of " << n << " is " << sumOfNum(n) << endl;
}