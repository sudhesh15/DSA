//Find the "Kth" max and min element of an array
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reversedArray(int arr[],int size){
  int s=0;
  int e=size-1;
  while(s<e){
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
}

int kthLargestElement(int arr[], int size, int K){
  sort(arr, arr+size);
  reversedArray(arr, size);
  for(int i=0;i<size;i++){
    return arr[K-1];
  }
}

int kthSmallestElement(int arr[], int size, int K){
  sort(arr, arr+size);
  for(int i=0;i<size;i++){
    return arr[K-1];
  }
}


int main(){
  int size;
  cout<<"Enter Size of an Array"<<endl;
  cin>>size;
  int K;
  cout<<"Enter K"<<endl;
  cin>>K;
  int arr[size];
  cout<<"Enter elements to Array"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  cout<<"Kth Largest Element is "<<kthLargestElement(arr, size, K)<<endl;
  cout<<"Kth Smallest Element is "<<kthSmallestElement(arr, size, K)<<endl;
  return 0;
}