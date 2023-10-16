//Pascal's Triangle Problem 1 - Find value in Pascal Triangle when Row & Column is given!

#include <bits/stdc++.h>
using namespace std;

int pascalTriangle(int r, int c) {
  long long res = 1;
  for (int i = 0; i < c; i++) {
    res = res * (r - i);
    res = res / (i + 1);
  }
  return res;
}

int main()
{
  int r, c;
  cout << "Enter Row & Column: " << endl;
  cin >> r >> c;
  int element = pascalTriangle(r-1, c-1);
  cout << "The element at position ("<<r<<","<<c<<") is: "<< element;
  return 0;
}
        
