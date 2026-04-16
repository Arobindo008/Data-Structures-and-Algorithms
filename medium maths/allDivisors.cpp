#include <iostream>
#include <vector>
using namespace std;

vector<int> findDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            divisors.push_back(i);
    }
    return divisors;
}

int main()
{
    int n = 100;
    vector<int> result = findDivisors(n);
    for (auto x : result)
        cout << x << " ";
    cout << endl;
}
