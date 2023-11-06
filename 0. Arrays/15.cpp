//Check if Array is Sorted & Rotated
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {3, 4, 5, 1, 2};
    int size = 5;

    int count = 0;
    for(int i = 1; i < size; i++) {
      if(arr[i - 1] > arr[i]) {
        count++;
      }
    }

    if(arr[size - 1] > arr[0]) {
      count++;
    }

    bool isSortedAndRotated = (count == 1);

    if(isSortedAndRotated) {
      cout << "Array is sorted and rotated." << endl;
    } else {
      cout << "Array is not sorted and rotated." << endl;
    }

    return 0;
}
