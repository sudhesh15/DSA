//Selection Sort
//in each round you get smallest element and plce it in right place
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
    int min=i;
    for(int j=i+1;j<size;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    }
    swap(arr[min], arr[i]);
  }

  printArr(arr,size);

  return 0;
}