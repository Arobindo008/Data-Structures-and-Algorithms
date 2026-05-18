#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 1. Declare a 2D vector
    vector<vector<int>> res;

    // 2. Create rows (1D vectors) and add them
    vector<int> row1 = {1, 2, 3};
    vector<int> row2 = {4, 5}; // Note: rows can have different sizes

    res.push_back(row1);
    res.push_back(row2);

    // 3. Access and Print elements
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
