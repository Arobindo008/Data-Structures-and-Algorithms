#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 2, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 121;
    cout << "index no: " << linearSearch(arr, size, target) << endl;
}