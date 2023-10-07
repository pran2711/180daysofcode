#include<iostream>
using namespace std;

// Q1. Distribute in Circle! - **InterviewBit**

// A items are to be delivered in a circle of size B.

// Find the position where the Ath item will be delivered if we start from a given position C.

// NOTE: Items are distributed at adjacent positions starting from C.

int solve(int A, int B, int C) {
    int result;
    int pos = A + C -1;
   
    
    while(pos > B){
        pos = pos-B;
    }
    
    if( pos < B)
    result = pos;
    
    
    return result;
// }

// Q 2. Number of 1 Bits
// Given a positive integer N, print count of set bits in it. 

int setBits(int N) {
        // Write Your Code here
        int ans = 0;
        while(N){
            int rem = N%2;
            if(rem == 1)
            ans+=1;
            
            N/=2;
        }
        
        return ans;
        
    }

// Q3. Bit Difference
// You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

    
int countBitsFlip(int a, int b){
        
        int ans =0;
        // Your logic here
        while(a!=0 || b!=0){
            int ans1 = a%2;
            int ans2 = b%2;
            
            if(ans1 != ans2)
            ans+=1;
            
         a /=2;
         b/=2;
        }
        
        return ans;
    }