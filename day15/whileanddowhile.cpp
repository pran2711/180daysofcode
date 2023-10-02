#include<iostream>
using namespace std;

// Q1: Take a number n from the user and print all the even numbers between 1 and n(inclusive).
//  Do this using while and do while loop separately

// While loop

int main(){
    int n;
   cout<<"Enter the number: ";
   cin>>n;
   int i = 1;
   while(i <= n){

    if(i%2==0)
    cout<<i<<endl;

    i++;

   }

}

// Do While


int main(){
    int n;
   cout<<"Enter the number: ";
   cin>>n;
   int i = 1;
   do{

    if(i%2==0)
    cout<<i<<endl;

    i++;

   } while(i <= n);

}

// Q2: Find the factorial of a number n using a while loop and do a while loop.

// While loop

int main(){
   int n;
   
   cout<<"Enter the number: ";
   cin>>n;
   int result  = n;
   int i = n-1;
   while(i >= 1){
    result *= i;
    i--;
   };

  cout<<result;
}

// Do While loop

int main(){
   int n;
   
   cout<<"Enter the number: ";
   cin>>n;
   int result  = n;
   int i = n-1;
   do{
    result *= i;
    i--;
   }while(i >= 1);

  cout<<result;
}

// Q3: Given a number n, print all the numbers from 1 to n(inclusive) 
// which are not divisible by 3 and 5. (use Continue here).

int main(){
   int n;
   
   cout<<"Enter the number: ";
   cin>>n;
   int i = 1;
   while(i <= n){
    if(i%3==0 && i%5==0)
    {
    i++;
    continue;
    }
    else{
     cout<<i<<endl;
    }
    i++;
   };

}

// Q4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…,
//  if the user puts any invalid number, don’t do anything. (Use switch here)

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    switch (n)
    {
    case 1:
        cout<<"Jan";
        break;
    
    case 2:
        cout<<"Feb";
        break;

    case 3:
        cout<<"Mar";
        break;
    case 4:
        cout<<"Apr";
        break;
    case 5:
        cout<<"May";
        break;
    
    case 6:
        cout<<"June";
        break;

    case 7:
        cout<<"July";
        break;
    case 8:
        cout<<"Aug";
        break;
    case 9:
        cout<<"Sept";
        break;
    
    case 10:
        cout<<"Oct";
        break;

    case 11:
        cout<<"Nov";
        break;
    case 12:
        cout<<"Dec";
        break;
    
    default:
        cout<<"Invalid Input";
        break;
    }
}

// Q5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

int main(){

    int i = 0,j = 0;

    while(i <= 25){
        char cap = 'A' + i;
        cout<<cap<<" ";
        i++;
    }
    cout<<endl;

    while(j <= 25){
        char small = 'a' + j;
        cout<<small<<" ";
        j++;
    }
}

// Q6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

int main(){
    int n,count = 0;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 2;
    while(i < n){
      if(n%i == 0)
      count = 1;
      break;
      i++;
    }

    if(count == 1){
        cout<<"Not Prime";
    }else{
        cout<<"Prime";
    }

   
}