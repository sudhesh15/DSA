//Form the biggest number from the numeric string - Logic - write in decreasing order
#include <iostream>
#include <algorithm>
#include <String>
using namespace std;

int main(){
  string str = "1234773992880";
  cout<<str<<endl;
  sort(str.begin(), str.end(), greater<int>());
  cout<<str<<endl;
}