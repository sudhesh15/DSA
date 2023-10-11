//Row wise Sum in 2-D Arrays & Column  Wise Sum
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printRowWiseSum(int arr[][4], int row, int col){
  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
      sum=sum+arr[i][j];
    }
    cout<<sum<<" ";
  }
}

void printColumnWiseSum(int arr[][4], int row, int col){
  for(int j=0;j<col;j++){
    int sum=0;
    for(int i=0;i<row;i++){
      sum=sum+arr[i][j];
    }
    cout<<sum<<" ";
  }
}

int main(){
  int arr[3][4];
  cout<<"Enter Values to 2-D Array"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cin>>arr[i][j];
    }
  }

  cout<<endl;

  cout<<"Row Wise Sum is "<<endl;
  printRowWiseSum(arr, 3,4);

  cout<<endl;

  cout<<"Column Wise Sum is "<<endl;
  printColumnWiseSum(arr, 3,4);

  return 0;
}