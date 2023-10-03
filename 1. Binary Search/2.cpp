//No of occurences
// example 0,0,1,1,2,2,2,2 - key 2 => 2 appered 4 times;
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
  cout<<key <<" appeared "<<(binarySearchRightElement(arr, size, key)-binarySearchLeftElement(arr, size, key))+1<<" times"<<endl;
  return 0;
}