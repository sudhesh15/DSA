//Find Pivot in an Array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pivotElement(int arr[], int size){
  int s=0;
  int e=size-1;
  int mid=s+ (e-s)/2;

  while(s<e){
    if(arr[mid]>=arr[0]){
      s=mid+1;
    }else{
      e=mid;
    }
    mid=s+ (e-s)/2;
  }
  return s;
}

int main(){
  int arr[5] = {7,9,1,2,3};
  int size = 5;
  //minimum element in graph is pivot
  cout<<"Pivot in an Array "<<pivotElement(arr, size);
  return 0;
}