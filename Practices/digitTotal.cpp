#include<iostream>
using namespace std;

int total(int n){
  int temp=0;
  while(n!=0){
  temp+=n%10;
  n=n/10;
  }
  return temp;
 } 

int main(){
  int n=1235;
  cout<<total(n)<<endl;
}
