#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    for (int i = 0; i < 10; i++)
    {
        s1.push(i);
    }
    s2.swap(s1);
    cout << "size of s1: " << s1.size() << endl;
    cout << "size of s2: " << s2.size() << endl;
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
    cout << " after size of s1: " << s1.size() << endl;
    cout << " after size of s2: " << s2.size() << endl;
    return 0;
}