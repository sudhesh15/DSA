#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
  int s=0;
  int e=size-1;
  int mid=(s+e)/2;

  while(s<=e){
    if(arr[mid]==key){
      return mid;
    }else if(key>arr[mid]){
      s=mid+1;
    }else{
      e=mid-1;
    }
    mid=(s+e)/2;
  }
  return -1;
}

int main(){
  int arr[5] = {1,2,3,4,5};
  int size = 5;
  int key=5;
  cout<<"binary search "<<binarySearch(arr, size, key);
  return 0;
}