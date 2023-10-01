#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int result = n;
 
  if(n <= 1){
    cout<<1;
  }
  else{
    for(int i = n-1; i >= 1; i--){
      result *= i;
    }
  }

  cout<<result;
}