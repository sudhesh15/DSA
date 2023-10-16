//Set Matrix to Zero
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSetZeroMatrix(int arr[][4], int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == 0) {
        for (int r = 0; r < row; r++) {
          if (arr[r][j]) {
            arr[r][j] = -1;
          }
        }
        for (int c = 0; c < col; c++) {
          if (arr[i][c]) {
            arr[i][c] = -1;
          }
        }
      }
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == -1) {
        arr[i][j] = 0;
      }
    }
  }
}

int main() {
  int arr[3][4];
  cout << "Enter Values to 2-D Array" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }

  cout << endl;

  cout << "New Matrix is " << endl;
  printSetZeroMatrix(arr, 3, 4);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
