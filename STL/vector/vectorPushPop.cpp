#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //vector<int> vec(6,1);
    vector<int> vec={1,2,3,4,5,6};
    vec.push_back(2);
    vec.push_back(3);

    //vec.pop_back(); //remove last ele
   // vec.erase(vec.begin()+1); //remove 2
  // vec.erase(vec.begin()+1,vec.begin()+3); //remove 2 to 3 
   // vec.insert(vec.begin()+1,10); //insert 10 at 2nd pos
  // vec.clear();// deletes all ele but capacity remains the same. 
  cout<<"is empty: "<<vec.empty()<<endl;
    for(auto x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}