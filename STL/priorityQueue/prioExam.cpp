#include <iostream>
#include <vector>
#include<queue>
using namespace std;

int main()
{
    priority_queue <int> q;
    q.push(2);
    q.push(10);
    q.push(5);
    q.push(12);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}