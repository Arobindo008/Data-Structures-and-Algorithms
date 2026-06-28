#include <iostream>
using namespace std;
int main()
{
    int ar[] = {1, 2, 3, 4};
    int n = sizeof(ar) / sizeof(ar[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << ar[k];
            }
            cout <<" ";
        }
        cout << endl;
    }
    
}