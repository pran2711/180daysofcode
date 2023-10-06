#include<iostream>
using namespace std;
#include<math.h>;

// Q1.
char convert(char name){
    char ans = name - 'a' +'A';
    return ans;
}


// Q2.

int totalDigits(int num){
    int count= 0;

    while(num!=0){
        count++;
        num = num/10;
    }

    return count;
}

void isItArmstrongNum(int num,int total){
    int ans = 0,x = num;

    while(x!=0){
        int rem = x%10;
        ans += pow(rem,total);
        x /= 10;
    }
  if(num == ans)
  cout<<"Yes it is armstrong number";
  else
  cout<<"No, its not";

}


int main(){
    char name;
    cin>>name;

    cout<<convert(name);

    int num;
    cin>>num;

    int total = totalDigits(num);

    isItArmstrongNum(num,total);

    
}

// Q3. Find 5 inbuilt function in c++ like min or max etc and write a code around them.

// 1. sqrt()
// 2. floor()
// 3. ceil()
// 4. toupper()
// 5. tolower()

// Q Find the interger square root or closer to it.

int main(){
    int num;
    cin>>num;
    int squareR  = sqrt(num);
    cout<<floor(squareR);
}
