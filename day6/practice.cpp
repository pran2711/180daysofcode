#include<iostream>
using namespace std;

// Q1. Write a program in C++ to display n terms of natural numbers and their sum.

int main(){
    cout<<"ENter the number: ";
   int n,i,sum = 0;
   cin>>n;

   for(i = 1; i <= n;i++){
      cout<<i<<endl;
      sum = sum + i;
   }

   cout<<"Total sum: "<<sum;
   
}

// Q2. Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

int main()
{
    
    int first, second,smaller,result = 0;
    cout<<"Enter the first number: ";
    cin>>first;
    cout<<"Enter the second number: ";
    cin>>second;
   
    if(first > second){
        smaller = second;
    }else{
        smaller = first;
    }

    for(int i = 1; i <= smaller;i++){
        if(first % i == 0 and second % i == 0){
           if(i > result){
            result = i;
           }
        }
    }

    cout<<result;



}