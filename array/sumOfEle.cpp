#include <iostream>
using namespace std;
void sumProduct(int arr[], int n)
{
    int sum = 0, product = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "sum: " << sum << endl;
    cout << "product: " << product << endl;
}

int main()
{
    int arr[] = {4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sumProduct(arr, n);
}