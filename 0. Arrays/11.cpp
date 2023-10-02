//Sort 0,1,2 in an array c++
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<", ";
  }
}

int main(){
  int arr[10] = {0,1,2,2,1,0,1,1,2,0};
  int size = 10;
  int c0=0;
  int c1=0;
  int c2=0;
  for(int i=0;i<size;i++){
    if(arr[i]==0) c0++;
    else if(arr[i]==1) c1++;
    else c2++;
  }
  int k=0;
  for(int i=0;i<c0;i++) arr[k++]=0;
  for(int i=0;i<c1;i++) arr[k++]=1;
  for(int i=0;i<c2;i++) arr[k++]=2;

  printArr(arr,size);
  return 0;
}