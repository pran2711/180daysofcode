#include<iostream>
using namespace std;

// Q1 Write a program to convert binary numbers to decimal numbers using a for loop.

int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
int rem,ans=0,mul=1;

for(;num > 0;){
  rem = num%10;

  num = num/10;

  ans = rem*mul+ans;

  mul = mul * 2;

}

cout<<ans<<endl;

}


// Q2. Write a program to convert decimal numbers to binary numbers using a for loop.


int main(){

int num;
cout<<"Enter the number: ";
cin>>num;
int rem,ans=0,mul=1;

for(;num>0;){
    rem = num % 2;

    num = num/2;

    ans = rem*mul+ans;

    mul = mul * 10;
}
 
 cout<<ans;

}

// Q3. Write a program to convert decimal numbers to Octal numbers.

int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
int rem,ans=0,mul=1;


while(num > 0){
    rem = num % 8;

    num = num/8;

    ans = rem*mul+ans;

    mul = mul*10;
}

cout<<ans;

}

// Q4. Write a program to convert Octal numbers to decimal numbers.

int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
int rem,ans=0,mul=1;


while(num > 0){
    rem = num % 10;

    num = num/10;

    ans = rem*mul+ans;

    mul = mul*8;
}

cout<<ans;

}

// Q5 Write a program to convert binary to Octal numbers

int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
int rem,ans=0,mul=1,count=0,additional=1;


while(num > 0){
    rem = num % 10;

    num = num/10;

    ans = rem*mul+ans;

    mul = mul*2;

    count++;
    if(count >= 4)
    additional *= 2;
    
}

if(count < 4)
additional = 0;

cout<<ans+additional;

}

// Q6 Write a program to convert Octal numbers to binary numbers

int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
int rem,deci=0,ans=0,mul1=1,mul2=1;


while(num > 0){

    rem = num % 10;

    num = num/10;

    deci = rem*mul1+deci;

    mul1 = mul1*8;
    
}

while(deci > 0){

    rem = deci % 2;

    deci = deci/2;

    ans = rem*mul2+ans;

    mul2 = mul2*10;
    
}

cout<<ans;

}