#include <iostream>
#include <vector>
using namespace std;

int profit(int prices[], int n)
{

    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (prices[j] > prices[i])
                if (profit < prices[j] - prices[i])
                    profit = prices[j] - prices[i];
        }
    }
    return profit;
}

int main()
{
    //int prices[] = {7, 10, 1, 3, 6, 9, 2};
    //int prices[] = {1, 3, 6, 9, 11};
    int prices[]={7, 6, 4, 3, 1};
    int n = sizeof(prices) / sizeof(prices[0]);
    cout << profit(prices, n) << endl;
}