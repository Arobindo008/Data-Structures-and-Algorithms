#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int mostWater(vector<int> height)
{
    int maxWater = INT_MIN, lp = 0, rp = height.size() - 1;
    while (lp < rp)
    {
        int wt = rp - lp;
        int ht = min(height[lp], height[rp]);
        int area = wt * ht;
        maxWater = max(maxWater, area);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << mostWater(height) << endl;
    return 0;
}