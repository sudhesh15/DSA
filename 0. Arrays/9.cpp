//Pair Sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[5] = {2,3,1,4,5};
  int size = 5;
  int sum=5;

  for(int i=0;i<size;i++){
    for(int j=1;j<size;j++){
      if(arr[i]+arr[j]==sum){
        cout<<arr[i]<<", "<<arr[j]<<endl;
        break;
      }
    }
  }

  return 0;
}