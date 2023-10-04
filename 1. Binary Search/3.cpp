//peak index in a mountain array - visit this problem agaian
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
  int s=0;
  int e=size-1;
  int mid=(s+e)/2;

  while(s<e){
    if(arr[mid]<arr[mid+1]){
      s=mid+1;
    }else{
      e=mid;
    }
    mid=(s+e)/2;
  }
  return s;
}

int main(){
  int arr[5] = {1,2,3,4,1};
  int size = 5;
  int key=5;
  cout<<"peak index in a mountain array "<<binarySearch(arr, size, key);
  return 0;
}