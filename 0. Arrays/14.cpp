//Rotate Sorted Arrays K times
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[5] = {11, 12, 13, 14, 15};
    int size = 5;
    int k = 3;
    int temp[size];

    // Copy the elements to the temporary array after rotation
    for (int i = 0; i < size; i++) {
      temp[(i + k) % size] = arr[i];
    }

    // Copy the elements from the temporary array back to the original array
    for (int i = 0; i < size; i++) {
      arr[i] = temp[i];
    }

    printArray(arr, size);
    return 0;
}
