#include<iostream>
using namespace std;

// Q1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

int main(){
    int a = 5, b=9;
    if(a > b){
        cout<<a;
    }
    else{
        cout<<b;
    }
}

// Q2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

int main(){
    int age = 27;
    if(age > 18){
        cout<<"Adult";
    }
    else{
        cout<<"Teenager";
    }
}

// Q3. Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    
    if(num >= 1 && num <= 12){
       if(num == 1){
        cout<<"Jan";
       }
       else if(num == 2){
        cout<<"Feb";
       }
       else if(num == 3){
        cout<<"Mar";
       }
       else if(num == 4){
        cout<<"Apr";
       }
       else if(num == 5){
        cout<<"May";
       }
       else if(num == 6){
        cout<<"June";
       }
       else if(num == 7){
        cout<<"July";
       }
       else if(num == 8){
        cout<<"Aug";
       }
       else if(num == 9){
        cout<<"Sep";
       }
       else if(num == 10){
        cout<<"Oct";
       }
       else if(num == 11){
        cout<<"Nov";
       }
       else{
        cout<<"Dec";
       }
    }
    else{
        cout<<"Invalid Input";
    }

}

// Q4. Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age < 12 || age > 65){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}