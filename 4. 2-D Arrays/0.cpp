//Basics of 2-D Arrays
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
  cout<<"Entered Values to 2-D Array are"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl;
  //other ways to initialize 2-D Array
  int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl;
  int arr2[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}