#include <iostream>
using namespace std;
// int count(int n){
//     if(n==0) return 1;
//     int count=0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     return count;
// }
// recursive
int count(int n)
{
    if (n / 10 == 0)
        return 1;
    else
        return 1 + count(n / 10);
}
int main()
{
    int n = 1023;
    cout << count(n) << endl;
}