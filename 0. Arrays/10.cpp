//Triplets
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[5] = {1,2,3,4,5};
  int size = 5;
  int sum = 12;

  for(int i=0;i<size;i++){
    for(int j=1;j<size;j++){
      for(int k=2;k<size;k++){
        if(arr[i]+arr[j]+arr[k]==sum){
          cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
          break;
        }
      }
    }
  }
  return 0;
}