#include<iostream>
#include<array>
using namespace std;

// Q1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

int main(){
    int arr[7] = {9,7,6,4,3,2,1};
    // find index of 2
    int key = 2;
    int start = 0;
    int end = 6;

    while(start <= end){
        int mid = start + (end -start)/2;

        if(arr[mid] == key)
        return mid;
        else if(arr[mid] > key)
        start = mid + 1;
        else
        end = mid -1;
    }

    return -1;
}