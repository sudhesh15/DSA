//Find whether an array is a subset of another array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr1[6] = {11,1,13,2,3,7};
  int arr2[4] = {11,3,7,1};
  int n1=6;
  int n2=4;

  sort(arr1, arr1 + n1);
  sort(arr2, arr2 + n2);

  bool isSubset = true;

  for (int i = 0; i < n2; i++) {
    if (!binary_search(arr1, arr1+n1, arr2[i])) {
      isSubset = false;
      break;
    }
  }

  if (isSubset) {
    cout << "arr2 is a subset of arr1." << endl;
  } else {
    cout << "arr2 is not a subset of arr1." << endl;
  }

  return 0;
}