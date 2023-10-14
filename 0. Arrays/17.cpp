//Next Permutation
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getNextPermutation(int arr[], int size){
  int idx=-1;
  for(int i=size-1;i>0;i--){
    if(arr[i]>arr[i-1]){
      idx=i;
      break;
    }
  }
  if(idx==-1){
    reverse(arr, arr + size);
  }else{
    int prev = idx;
    for(int i=idx+1;i<size;i++){
      if(arr[i]>arr[idx-1] && arr[i]<=arr[prev]){
        prev=i;
      }
    }
    swap(arr[idx-1], arr[prev]);
    reverse(arr + idx, arr + size);
  }
}

int main(){
  int arr[9] = {1,5,8,4,7,6,5,3,1};
  int size = 9;
  getNextPermutation(arr, size);
   for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}