//Remove Space and Replace by %40
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;
  cout << "Enter a String: " << endl;
  getline(cin, input); 

  string temp = "";
  for (int i = 0; i < input.length(); i++) {
    if (input[i] == ' ') {
      temp.push_back('%');
      temp.push_back('4');
      temp.push_back('0');
    } else {
      temp.push_back(input[i]);
    }
  }

  cout << "Modified String: " << temp << endl;
  return 0;
}
