#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    //forward
    vector<int> vec={1,2,3,4,5,6};
    // vector<int>:: iterator it;
    // for(it=vec.begin();it!=vec.end();it++){
    //     cout<<*(it)<<" ";
    // }

    //reverse
     //vector<int>:: reverse_iterator it; //use iterator/reverse_iterator or simply use auto.
    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    return 0;
}