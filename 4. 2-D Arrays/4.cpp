//Print Like A Wave
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printLikeAWave(int arr[][3], int row, int col) {
  for (int j = 0; j < col; j++) {
    if (j == 0 || j % 2 == 0) { 
      for (int i = 0; i < row; i++) {
        cout << arr[i][j] << " ";
      }
    } else { 
      for (int i = row - 1; i >= 0; i--) {
        cout << arr[i][j] << " ";
      }
    }
    cout << endl;
  }
}


int main(){
  int arr[3][3];
  cout<<"Enter Values to 2-D Array"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }

  cout<<endl;

  cout<<"You Wave is here "<<endl;
  printLikeAWave(arr, 3,3);

  return 0;
}