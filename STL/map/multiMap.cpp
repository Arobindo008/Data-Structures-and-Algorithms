#include <iostream>
#include <vector>
#include<map>
using namespace std;

int main()
{
    multimap<string,int> m;
    m.insert({"tv",100});
    m.emplace("tv",100);
    m.emplace("tv",50);
    
    //m.erase("tv"); //erase all
    m.erase(m.find("tv")); //erase first key or single key

    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    
    return 0;
}