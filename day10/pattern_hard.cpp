#include<iostream>
using namespace std;


// Q1. Print
//     *
//    **
//   ***
//  ****
// *****


int main(){
    for(int i = 1; i <= 5; i++){
        int s;
        for(s = 1; s <= 5-i;s++){
            cout<<" ";
        }

        for(s = 1; s <= i;s++){
            cout<<"*";
        }

        cout<<endl;
    }
}


// Q2. Print
//     1
//    22
//   333
//  4444
// 55555

int main(){
    for(int i = 1; i <= 5; i++){
        int s;
        for(s = 1; s <= 5-i;s++){
            cout<<" ";
        }

        for(s = 1; s <= i;s++){
            cout<<i;
        }

        cout<<endl;
    }
}


// Q3.Print

//     1
//    12
//   123
//  1234
// 12345

int main(){
    for(int i = 1; i <= 5; i++){
        int s;
        for(s = 1; s <= 5-i;s++){
            cout<<" ";
        }

        for(s = 1; s <= i;s++){
            cout<<s;
        }

        cout<<endl;
    }
}

// Q.4 print

//     A
//    AB
//   ABC
//  ABCD
// ABCDE

int main(){
    for(int i = 1; i <= 5; i++){
        int s;
        for(s = 1; s <= 5-i;s++){
            cout<<" ";
        }

        for(s=1;s<=i;s++){
            char name = 'A'+ s-1;
            cout<<name;
        }

        cout<<endl;
    }
}

// Q5. Print

//     1
//    21
//   321
//  4321
// 54321

int main(){
    for(int i = 1; i <= 5; i++){
        int s;
        for(s = 1; s <= 5-i;s++){
            cout<<" ";
        }

        for(s=i;s>=1;s--){
            cout<<s;
        }

        cout<<endl;
    }
}


// Q6. Print

//     A
//    BB
//   CCC
//  DDDD
// EEEEE

int main(){
    for(int i = 1; i <= 5; i++){
        int s;
        for(s = 1; s <= 5-i;s++){
            cout<<" ";
        }
        char name = 'A'+(i-1);
        for(s = 1;s<=i;s++){
            cout<<name;
        }

        cout<<endl;
    }
}

// Q7. Print

//     5
//    54
//   543
//  5432
// 54321

int main(){
    for(int i = 1; i <= 5; i++){
        int s;
        for(s = 1; s <= 5-i;s++){
            cout<<" ";
        }


        for(s = 5;s>5-i;s--){
            cout<<s;
        }

        cout<<endl;
    }
}

// Q8. Print
//     E
//    ED
//   EDC
//  EDCB
// EDCBA

int main(){
    for(int i = 1; i <= 5; i++){
        int s;
        for(s = 1; s <= 5-i;s++){
            cout<<" ";
        }
       
        for(s = 1;s<=i;s++){
         char name = 'E'-(s-1);
            cout<<name;
        }

        cout<<endl;
    }
}