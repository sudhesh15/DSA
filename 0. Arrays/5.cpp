//swap alternates
// i/p {1,2,7,8,5} => {2,1,8,7,5}
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[5] =  {1,2,7,8,5};
  int size=5;
  for(int i=0;i<size;i+=2){
    if(i+1<size){
      swap(arr[i], arr[i+1]);
    }
  }
  printArray(arr,size);
  return 0;
}