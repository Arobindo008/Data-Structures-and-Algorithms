#include <iostream>
using namespace std;

void printUnique(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 3, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printUnique(arr, n);
}