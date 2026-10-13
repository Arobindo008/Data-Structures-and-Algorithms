#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m["tv"] = 100;
    m["fan"] = 20;
    m["laptop"] = 100;
    m.insert({"pc", 120});
    m.emplace("sofa", 150);

    m.erase("pc");

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << m.count("laptop") << endl;

    if (m.find("t") != m.end())
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    cout << endl;
    return 0;
}