//Insertion Sort
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

  for(int i=1;i<size;i++){
    int temp=arr[i];
    int j=i-1;
    for(; j>0;j--){
      if(arr[j]>temp){
         arr[j+1]=arr[j];
      }else{
        break;
      }
    }
    arr[j+1]=temp;
  }

  printArr(arr,size);

  return 0;
}