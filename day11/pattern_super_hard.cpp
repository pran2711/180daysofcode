#include<iostream>
using namespace std;


// Q1. Print
//    *
//   ***
//  *****
// *******

int main(){
    
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
   
   for(int r = 1; r <= n; r=r+1){

      int c;
      for(c =1; c <= n - r; c++){
        cout<<" ";
      }

      for(c =1; c <= 2*r-1;c++){
        cout<<"*";
      }

      cout<<endl;

   }

}



// Q2. Print
//    1
//   121
//  12321
// 1234321

int main(){
    
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
   
   for(int r = 1; r <= n; r=r+1){

      int c;
      for(c =1; c <= n - r; c++){
        cout<<" ";
      }

      for(c =1; c < r;c++){
        cout<<c;
      }

      for(c =r;c>=1;c--){
        cout<<c;
      }

      cout<<endl;

   }

}


// Q3. Print 
// *******
//  *****
//   ***
//    *

int main(){
    
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
   
   for(int r = n; r >= 1; r=r-1){

      int c;
      
      for(c =1; c <= n-r;c++){
        cout<<" ";
      }

     for(c =1; c <= 2*r-1; c++){
        cout<<"*";
      }

      cout<<endl;

   }

}




// Q4. Print

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

int main(){
    
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
   
   for(int r = n; r >= 1; r=r-1){

      int c;
      
      for(c =1; c <= r; c++){
        cout<<"*";
      }

      for(c =1; c <= 2*n-2*r;c++){
        cout<<" ";
      }

     for(c =1; c <= r; c++){
        cout<<"*";
      }

      cout<<endl;

   }

   for(int r = 1; r <= n; r=r+1){

      int c;
      
      for(c =1; c <= r; c++){
        cout<<"*";
      }

      for(c =1; c <= 2*n-2*r;c++){
        cout<<" ";
      }

     for(c =1; c <= r; c++){
        cout<<"*";
      }

      cout<<endl;

   }

}



// Q5. Print
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

int main(){
    
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
   
   for(int r = 1; r <= n; r=r+1){

      int c;
      
      for(c =1; c <= r; c++){
        cout<<"*";
      }

      for(c =1; c <= 2*n-2*r;c++){
        cout<<" ";
      }

     for(c =1; c <= r; c++){
        cout<<"*";
      }

      cout<<endl;

   }

   for(int r = n-1; r >= 1; r=r-1){

      int c;
      
      for(c =1; c <= r; c++){
        cout<<"*";
      }

      for(c =1; c <= 2*n-2*r;c++){
        cout<<" ";
      }

     for(c =1; c <= r; c++){
        cout<<"*";
      }

      cout<<endl;

   }

}




// Q6. Print
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     *


int main(){
    
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
   
   for(int r = 1; r <= n; r=r+1){

      int c;
      
      for(c =1; c <= n-r; c++){
        cout<<" ";
      }

      for(c =1; c <=r;c++){
        cout<<"*";
        cout<<" ";
      }

      cout<<endl;

   }

 for(int r = n; r >= 1; r=r-1){

      int c;
      
      for(c =1; c <= n-r; c++){
        cout<<" ";
      }

      for(c =1; c <=r;c++){
        cout<<"*";
        cout<<" ";
      }

      cout<<endl;

   }

}


// Q7. Print
//     1
//    123
//   12345
//  1234567
// 123456789


int main(){
    
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
   
   for(int r = 1; r <= n; r=r+1){

      int c;
      
      for(c =1; c <= n-r; c++){
        cout<<" ";
      }

      for(c =1; c <=2*r-1;c++){
        cout<<c;
      }

      cout<<endl;

   }

}


// Q8. Print
//    A
//   ABA
//  ABCBA
// ABCDCBA

int main(){
    
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
   
   for(int r = 1; r <= n; r=r+1){

      char c;
      
      for(c =1; c <= n-r; c++){
        cout<<" ";
      }

      char name = 'A';
      for(c =name; c < name+(r-1);c++){
        cout<<c;
      }

      for(c = name+(r-1);c>=name;c--){
        cout<<c;
      }

      cout<<endl;

   }

}