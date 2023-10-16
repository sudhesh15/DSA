//Pascal's Triangle Problem 2 - Print all Row of a Pascal Traingle till given row n.
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(int r, int c) {
  long long res = 1;
  for (int i = 0; i < c; i++) {
    res = res * (r - i);
    res = res / (i + 1);
  }
  return res;
}

void pascalRow(int n) {
  for(int i = 1; i <= n; i++) {
    cout << getSingleElement(n - 1, i - 1) << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Enter the number of rows of Pascal's Triangle: " << endl;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    pascalRow(i);
  }

  return 0;
}
