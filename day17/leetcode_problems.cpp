#include<iostream>
using namespace std;


// // Q1.Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
int addDigits(int num) {
       int  n = num;
        while(n > 9){
        int ans = 0;

        while(n != 0)
        {
            int rem = n%10;
            n /= 10;
            ans = ans+rem;
        }
        n = ans;
        }
        return n;
    }

// // Q2. For an input year N, find whether the year is a leap or not. 

int isLeap(int N){
        //code here
        
        if(N%400==0){
            return 1;
        }
        else if(N%4==0 && N%400 != 0){
            return 1;
        }
        else{
            return 0;
        }
    }

// // Q3. Given a signed 32-bit integer x, return x with its digits reversed.

 int reverse(int x) {
        int ans = 0;

        while(x != 0){
            int rem = x%10;
            x /= 10;
            if (ans > INT_MAX/10)
            return 0;

            if (ans < INT_MIN/10)
            return 0;
            ans = ans*10+rem;
           
        }
        return ans;
    }


// // Q4.Given a non-negative integer x, return the square root of x rounded down 
// to the nearest integer. The returned integer should be non-negative as well.

    int mySqrt(int x) {
        int ans = 0,i =1;
       

        while(i < INT_MAX/i){
    
        if(i*i <= x)
        ans = i;
         i++;
        }
        return ans;
    }

// // Q5. Given an integer n, return true if it is a power of two. Otherwise, return false.

  bool isPowerOfTwo(int n) {
        if(n < 1){
            return false;
        }
        
        while(n != 1){
            if(n%2==1)
            return 0;

            n = n/2;
        }
        return 1;
    }

// Q6. Given an integer x, return true if x is a palindrome , and false otherwise.
  bool isPalindrome(int x) {
        int ans = 0,n = x;
       
        if( n < 0)
        return false;

        while(n){
            int rem = n%10;
            n /= 10;
            if(ans > INT_MAX/10)
            return 0;
            ans = ans*10+rem;
        }

        if(x == ans)
        return true;
        else
        return false;
    }

// // Q7 The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

   int bitwiseComplement(int n) {
        int ans =0,mul =1;

        if(n==0)
        return 1;

        while(n){
            int rem = n % 2;
            rem = rem^1;
            n = n/2;

            ans = ans+rem*mul;

            mul *=2;
        }

        return ans;
    }
  


// // Q8 Find the total number of Squares in a N*N chessboard.
 long long squaresInChessBoard(long long N) {
        long long ans = 0;
        
        for(long long i = 1; i <= N; i++){
            ans += i*i;
        }
        
        return ans;
    }
      

// Q9. An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

// Given an integer n, return true if n is an ugly number.

    bool isUgly(int n) {
      if(n==1)
      return true;

      if(n<=0)
      return false;

      while (n % 2 == 0) {
        n /= 2;
      }
       while (n % 3 == 0) {
        n /= 3;
      }
      while (n % 5 == 0) {
        n /= 5;
       }
     
      return n == 1;

    }