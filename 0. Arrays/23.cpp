//Pascal's Triangle Problem 2 - Print any given Row of a Pascal Traingle!

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

void pascalRow(int n){
  for(int i=1;i<=n;i++){
    cout<<getSingleElement(n-1, i-1)<<" ";
  }
}

int main()
{
  int n;
  cout << "Enter the row of Pascal's Triangle " << endl;
  cin >>n;
  pascalRow(n);
  return 0;
}
        