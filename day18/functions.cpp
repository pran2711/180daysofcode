#include<iostream>
using namespace std;

// Q1: Find the cube of a number using Function. 
int findCube(int n){
    int ans = n*n*n;

    return ans;
}

// Q2: Reverse a number n using Function, Constraints: -5000<=n<=5000

int reverseNumber(int n){
   int ans = 0;

   while(n != 0){
    int rem = n%10;
    n = n/10;
    ans = ans*10+rem;

   }
   return ans;

}

// Q3. There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. 
// Do it using Function.

 void swapThree(int &a, int &b, int &c){
    int temp1 = c;
    int temp2 = b;
    b = a;
    c = temp2;
    a = temp1;
 }

// Q4: Swap 2 numbers a, b without using extra variables. Range of 
// -10000<=a,b<=100000.
void swapTwo(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;

}


// Q5: Print “Hello Coder Army” n times using Function.
void printNTimes(int n){
    for(int i = 1; i <= n; i++){
        cout<<"Hello Coder Army"<<endl;
    }
}

// Q6: Given two numbers n, r. Find nCr (Combination). Use Function here.

int facto(int n){
    int ans = n;
    for(int i = n-1; i >= 1; i--){
       ans *= i;
    }

    return ans;
}

int findCombination(int n, int r){
    int ans = facto(n)/(facto(r)*facto(n-r));
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Number: ";

    cin>>n;
    cout<<findCube(n);
    cout<<reverseNumber(n);

    int a,b,c;
    cout<<"Enter the Numbers: ";
    cin>>a>>b>>c;
    swapThree(a,b,c);
    cout<<a<<" "<<b<<" "<<c;

     cout<<"Enter the numbers: ";
    cin>>a>>b;
    swapTwo(a,b);
    cout<<a<<" "<<b;

    printNTimes(7);
    cout<<findCombination(5,3);
    int a,b; 
    
   

}