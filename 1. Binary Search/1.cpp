//First & Last Element of Sorted Array
// example 0,0,1,1,2,2,2,2 - key 2 => first index of 2 is 4; last index of 2 is 7;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearchLeftElement(int arr[], int size, int key){
  int s=0;
  int e=size-1;
  int mid=(s+e)/2;
  int ans =-1;

  while(s<=e){
    if(arr[mid]==key){
      ans=mid;
      e=mid-1;
    }else if(key>arr[mid]){
      s=mid+1;
    }else{
      e=mid-1;
    }
    mid=(s+e)/2;
  }
  return ans;
}

int binarySearchRightElement(int arr[], int size, int key){
  int s=0;
  int e=size-1;
  int mid=(s+e)/2;
  int ans =-1;

  while(s<=e){
    if(arr[mid]==key){
      ans=mid;
      s=mid+1;
    }else if(key>arr[mid]){
      s=mid+1;
    }else{
      e=mid-1;
    }
    mid=(s+e)/2;
  }
  return ans;
}

int main(){
  int arr[8] = {0,0,1,1,2,2,2,2};
  int size = 8;
  int key=2;
  cout<<"binary search Left Element "<<binarySearchLeftElement(arr, size, key)<<endl;
  cout<<"binary search Right Element "<<binarySearchRightElement(arr, size, key);
  return 0;
}