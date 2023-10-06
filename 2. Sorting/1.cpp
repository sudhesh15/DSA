//Bubble Sort
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[5]={7,9,2,1,4};
  int size=5;

  for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }

  printArr(arr,size);

  return 0;
}