//Largest Row Sum in 2-D Arrays
#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

void getLargestRow(int arr[][4], int row, int col){
  int max = INT_MIN;
  int rowIndex=-1;
  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
      sum=sum+arr[i][j];
    }
    if(sum>max){
      rowIndex=row;
      max = sum;
    }
  }
  cout<<"The Maximum Sum is "<<max<<" at the row "<<rowIndex<<" ";
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

  getLargestRow(arr, 3,4);

  return 0;
}