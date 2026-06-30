#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int mostWater(vector<int> height)
{
    int maxWater = INT_MIN;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int weight = j - i;
            int ht = min(height[i], height[j]);
            int area = weight * ht;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << mostWater(height) << endl;
    return 0;
}