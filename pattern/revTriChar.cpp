#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char ch = 'A',temp;
    for (int i = 0; i < n; i++)
    {
        temp=ch;
        for (int j = 0; j<=i; j++)
        {
            cout<<temp--<<" ";  
            
        }
        ch++;
        cout << endl;
    }
}