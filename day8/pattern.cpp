#include<iostream>
using namespace std;


// Q1. Print
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * *

int main(){
    for(int i =1; i <=5; i++){
        for(int j = 1; j <=5; j= j+1){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

// Q2. Print
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

int main(){
    for(int i =1; i <=5; i++){
        for(int j = 1; j <=i; j= j+1){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

// Q3. Print
// 11111
// 22222
// 33333
// 44444
// 55555

int main(){
    for(int i = 1; i <= 5; i=i+1)
    {
        for(int j = 1; j <= 5; j=j+1){
            cout<<i<<"";
        }
        cout<<endl;
    }
}

// Q4. Print

// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 

int main(){
    for(int i =1; i <=5; i++){
        for(int j = 1; j <=5; j= j+1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Q5. Print
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1

int main(){
    for(int i =1; i <=5; i++){
        for(int j = 5; j >=1; j= j-1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Q6. Print
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e


int main(){
    for(int i =1; i <=5; i++){
        for(char j = 'a'; j <='e'; j= j+1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Q7. Print
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 

int main(){
     int count = 1;
    for(int i =1; i <=5; i++){       
        for(int j = 0; j <5; j= j+1){
            cout<<count+j<<" ";
        }
        count = count+5;
        cout<<endl;
    }
}

// Q8. Print
// F G H I J K 
// F G H I J K 
// F G H I J K 
// F G H I J K 
// F G H I J K

int main(){
    for(int i =1; i <=5; i++){
        for(char j = 'F'; j <='K'; j= j+1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

