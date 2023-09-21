#include<iostream>
using namespace std;

Q1. Print “India will win the World Cup 2023”, 20 times.
int main(){
    for(int i=1;i<=20;i=i+1){
        cout<<"India will win the World Cup 2023\n";
    }
}

// Q2. Print all Odd numbers from 1 to n, take n as an input from the user.

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i=i+2){
        cout<<i<<endl;
    }
}

// Q3. Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // Approach 1
    for(int i = 4;i<=n;i=i+4){
        cout<<i<<endl;
    }

    // Approach 2
    for(int i = 1;i<=n;i++){
        if(i%4==0){
            cout<<i<<endl;
        }
    }
}