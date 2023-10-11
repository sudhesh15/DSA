//Linear Search in 2-D Arrays
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[3][4];
  cout<<"Enter Values to 2-D Array"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cin>>arr[i][j];
    }
  }

  cout<<endl;
  
  int K;
  cout<<"Enter Value of K ";
  cin>>K;

  cout<<endl;

  cout<<"K is at position ";
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      if(arr[i][j]==K){
        cout<<"("<<i<<","<<j<<")"<<endl;
      }
    }
  }


  return 0;
}