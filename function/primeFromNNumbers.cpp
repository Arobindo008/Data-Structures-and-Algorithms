#include <iostream>
using namespace std;

void isPrime(int n)
{
    int sum = 0;
    if (n <= 1)
        cout << -1;
    for (int i = 2; i <= n; i++)

    {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << i << " ";
            sum += i;
        }
    }
    cout<<endl;
    cout << "Sum: " << sum;
    cout << endl;
}

int main()
{
    int n = 5;
    isPrime(n);
}