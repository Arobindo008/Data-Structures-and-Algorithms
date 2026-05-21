#include <iostream>
using namespace std;

int profit(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if(price[i]>price[i-1])
          profit+=price[i]-price[i-1];
    }
    return profit;
}

int main()
{
    int price[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(price) / sizeof(price[0]);
    cout << profit(price, n) << endl;
}