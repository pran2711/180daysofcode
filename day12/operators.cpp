#include<iostream>
using namespace std;


// Q1: Temperature Range: Write a program that checks if a given 
// temperature is suitable for swimming. If the temperature is 
// between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.

int main(){
    int temp;
    cout<<"Enter the temperature: ";
    cin>>temp;

    if(70<temp && temp<90){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}


// Q2: Even and Positive Number: Write a program that prints “YES” 
// if a given number is both even and positive, otherwise it will print “NO”.


int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num%2==0 && num > 0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}

// Q3: Age Check: Implement a program that checks if a person is a teenager. 
// A teenager is someone whose age is between 13 and 19 (inclusive).


int main(){
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    if(13<=age && age<=19){
        cout<<"Teenager";
    }
    else{
        cout<<"Not a teenager";
    }

}

// Q4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter c: ";
    cin>>c;

    if(a > b || a > c){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}


// Q5: What will be the result below according to the precedence table.

//     2*3-48==5/4*6
//     6<<2-4*8/2
//     5>4<3/2-8%4+5
//     14-8+92>>2+70

    // Q5.1         5>4<3/2-8%4+5  = 1/true;
    // Precedence =  6 5 1 4 2 3
    // Q5.2         14-8+92>>2+70  = 0;
    // Precedence =   1 2  4  3
    // Q5,3         6<<2-4*8/2  = 6<<-14=>N.D.;
    // Precedence  = 4  3 1 2
    // Q5,4       = 2*3-48==5/4*6 = 0/false;
    // Precedence  = 1 4   5 2 3

