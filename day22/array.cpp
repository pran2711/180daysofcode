#include<iostream>
using namespace std;


// Q1. Take 20 elements from user input and find its sum with the help of an array

int main(){
    int numarr[20];
    int sum = 0;

    for(int i = 0;i < 20;i++){
        cout<<"Number " << i + 1 << ": ";
        cin>>numarr[i];
        sum+=numarr[i];
    }

    cout<<sum;
}


// Q2. Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays

int main(){
    char arr[26];

    for(int i =0; i < 26;i++){
        arr[i] = 'a' + i;
    }

    for(int i =0;i < 26;i++){
        cout<<arr[i]<<" ";
    }

}