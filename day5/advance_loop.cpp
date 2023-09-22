#include<iostream>
using namespace std;

// Q1. Print number from 280 to 250 with the help of for loop.

int main(){
    for(int i = 280; i >= 250; i=i-1){
        cout<<i<<endl;
    }
}

// Q2. Print char from ‘A’ to ‘Z’ with the help of a for loop.

int main(){
    for(char i = 'A'; i <= 'Z'; i=i+1){
        cout<<i<<endl;
    }
}

// Q3. Print char from ‘Z’ to ‘A’ with the help of a for loop.

int main(){
     for(char i = 'Z'; i >= 'A'; i=i-1){
        cout<<i<<endl;
    }
}

// Q4. There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

int main(){
    for(int i = 220; i <=730; i=i+7){
        cout<<i<<endl;
    }
}


// Q5. Print Sum of square of first n natural number.

int main(){
    int n, i;
    cout<<"Enter the NUmber: ";
    cin>>n;
    int sum = 0;

    for(i = 1; i <= n; i=i+1){
        sum = sum + (i*i);
    }

    cout<<sum;

}

// Q6. Print Sum of cube of first n natural number

int main(){
    int n, i;
    cout<<"Enter the NUmber: ";
    cin>>n;
    int sum = 0;

    for(i = 1; i <= n; i=i+1){
        sum = sum + (i*i*i);
    }

    cout<<sum;

}

// Q7. Print n’th Fibonacci number.

int main(){
    cout<<"Enter the Number: ";
    int prev = 0, curr = 1,n,result;
    cin>>n;
    if(n == 1){
        cout<<0;
        return 0;
    }

    if(n == 2){
        cout<<1;
        return 0;
    }


    for(int i = 3; i <= n; i=i+1){
         result = prev + curr;
         prev = curr;
         curr = result;
    }

    cout<<result;
}