#include <iostream>
#include <cmath>
using namespace std;

double findDistance(int x1, int y1, int x2, int y2)
{
    int point1 = pow(x2 - x1, 2);
    int point2 = pow(y2 - y1, 2);
    double dis = sqrt(point1 + point2);
    return dis;
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    cout << findDistance(x1, y1, x2, y2) << endl;
}