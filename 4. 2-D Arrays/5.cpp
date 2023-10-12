//Spiral Matrix
#include <iostream>
using namespace std;

void printSpiralMatrix(int arr[][3], int m, int n) {
  int top = 0, bottom = m - 1, left = 0, right = n - 1;

  while (top <= bottom && left <= right) {
    // Print the top row
    for (int i = left; i <= right; i++) {
      cout << arr[top][i] << " ";
    }
    top++;

    // Print the rightmost column
    for (int i = top; i <= bottom; i++) {
      cout << arr[i][right] << " ";
    }
    right--;

    // Print the bottom row (if there is one)
    for (int i = right; i >= left; i--) {
      cout << arr[bottom][i] << " ";
    }
    bottom--;

    // Print the leftmost column (if there is one)
    for (int i = bottom; i >= top; i--) {
      cout << arr[i][left] << " ";
    }
    left++;
    
  }
}

int main() {
  int arr[3][3];
  cout << "Enter Values to 2-D Array" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cin >> arr[i][j];
    }
  }

  cout << "You Spiral Matrix is here" << endl;
  printSpiralMatrix(arr, 3, 3);

  return 0;
}
