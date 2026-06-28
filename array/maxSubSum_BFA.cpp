#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> ar = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    for (int st = 0; st < ar.size(); st++)
    {
        int currentSum = 0;
        for (int end = st; end < ar.size(); end++)
        {
            currentSum += ar[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout <<"maximum subarray sum: "<< maxSum << endl;
}