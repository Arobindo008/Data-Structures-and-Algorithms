#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m.insert({"tv",100});
    m.emplace("v",100);
    m.emplace("t",50);
    
  
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    
    return 0;
}