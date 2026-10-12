#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int,int>> vec = {{1,2},{2,3,},{3,4}};
    vec.push_back({4,5});
    vec.emplace_back(5,6);

    for(auto x: vec){
        cout<<x.first<<" "<<x.second<<" ";
    }
    cout<<endl;
    return 0;
}