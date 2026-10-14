#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(12);
    s.insert(13);

    cout << "lower bound = " << *(s.lower_bound(1)) << endl;
    cout << "upper bound = " << *(s.lower_bound(11)) << endl;
    cout << "upper bound = " << *(s.lower_bound(13)) << endl;
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}