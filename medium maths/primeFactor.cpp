#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactor(int n)
{
    vector<int> result;
    for (int i = 2; i < n; i++)
    {
        while(n%i==0 && n>0){
            result.push_back(i);
            n=n/i;
        }
    }
    return result;
}

int main()
{
    int n = 25;
    vector<int> result = primeFactor(n);
    for(auto x: result){
        cout<< x<<" ";
    }
    cout<<endl;
    return 0;
}