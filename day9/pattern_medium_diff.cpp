#include<iostream>
using namespace std;


// Q1. Print
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5


int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j= j+1){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


// Q2. Print

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1


int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = i; j >= 1; j= j-1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Q3. Print
// a 
// b b 
// c c c 
// d d d d 
// e e e e e

int main(){
    for(int i = 1; i <= 5; i++){
        char name = 'a' + (i-1);
        for(char j = 1; j <= i; j= j+1){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}


// Q4. Print
// * * * * * 
// * * * * 
// * * * 
// * * 
// *

int main(){
    for(int i = 1; i <= 5; i++){
        for(char j = 5; j >= i; j= j-1){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


// Q5. Print
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

int main(){
    for(int i = 5; i >= 1; i--){
        for(int j = 1; j<= i; j= j+1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Q6. Print
// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1

int main(){
    for(int i = 5; i >= 1; i--){
        for(int j = 5; j>= i; j= j-1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Q7. Print
// A 
// A B 
// A B C 
// A B C D 
// A B C D E

int main(){
    for(int i = 1; i <= 5; i++){
        for(char j = 'A'; j<= 'A'+(i-1); j= j+1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



// Q8. Print

// 10 
// 10 11 
// 10 11 12 
// 10 11 12 13 
// 10 11 12 13 14 
// 10 11 12 13 14 15

int main(){
    for(int i = 1; i <= 6; i++){
        for(int j = 10; j<= 10+(i-1); j= j+1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Q9. Print

// A B C D 
// A B C 
// A B 
// A

int main(){
    for(int i = 4; i >= 1; i--){
        for(char j = 'A'; j<= 'A'+(i-1); j= j+1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

