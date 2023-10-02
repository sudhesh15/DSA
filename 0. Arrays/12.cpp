//Move negative elements to left side of Array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[10] = {1,2,-1,2,-9,8,5,-5,6,-8};
  int size = 10;
  int pivot = 0;
  int i = -1;
  for(int j=0;j<size;j++){
    if(arr[j]<pivot){
      i++;
      swap(arr[i],arr[j]);
    }
  }
  printArray(arr, size);
  return 0;
}