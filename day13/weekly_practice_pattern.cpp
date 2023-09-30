#include<iostream>
using namespace std;


// Q1. Print 
// *******1********

// *******2*2*******

// ******3*3*3******

// *****4*4*4*4*****

// ****5*5*5*5*5****


int main(){

  for(int r = 1; r <= 5; r++){
    int c;
    for(c = 1; c <= 9-r;c++){
        cout<<"*";
    }
    
    for(c = 1; c<=r;c++){
        cout<<r;
        cout<<"*";
    }

    for(c = 1; c <= 8-r;c++){
        cout<<"*";
    }

    cout<<endl;

  }

}


// Q2. Print 

// 1

// 2*3

// 4*5*6

// 7*8*9*10

// 7*8*9*10

// 4*5*6

// 2*3

// 1


int main(){

   int n;
   cout<<"Enter the number: ";
   cin>>n;
   int count = 1;
   for(int r = 1; r <=n; r++){
   

     int c;
     for(c = count; c<= count+r-1;c++){
        cout<<c;
        if(c<count+r-1)
        cout<<"*";
     }
     count = c;
     cout<<endl;
   }

   int starter;
   for(int r = n; r >= 1; r--){
      int c;
      starter = count -r;
      for(c = starter; c <= count-1; c++){
        cout<<c;
        if(c<count-1)
        cout<<"*";
      }
      count = starter;
      cout<<endl;
   }

   cout<<"count: "<<count;
    
}