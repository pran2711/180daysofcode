#include<iostream>
using namespace std;

// Q.1: Use Insertion Sort Algorithm to sort the array of integers in decreasing order.

int main(){

   int arr[6]  = {34,21,76,56,54,27};

   for(int i = 1; i < 6; i++){
        
        for(int j = i; j > 0; j--){
        if(arr[j] > arr[j-1])
        swap(arr[j],arr[j-1]);
        else
        break;

        }
   }

   for(int i = 0; i < 6; i++){
    cout<<arr[i]<<" ";
   }
}

// Q2. Insertion Sort Algorithm to sort the array of integers in 
// increasing order if we start from the last element of the array. 


int main(){

   int arr[6]  = {34,21,76,56,54,27};

   for(int i = 5; i > 0; i--){
        
        for(int j = i-1; j >= 0; j++){
        if(arr[j] > arr[j+1])
        swap(arr[j],arr[j+1]);
        else
        break;

        }
   }

   for(int i = 0; i < 6; i++){
    cout<<arr[i]<<" ";
   }
}
