//Reverse a String
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getStringLength(char name[]) {
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}

void reverseString(char name[], int strLength) {
  int s = 0;
  int e = strLength - 1; // Initialize 'e' to the last index of the string
  while (s < e) {
    swap(name[s], name[e]);
    s++;
    e--;
  }
}

int main() {
  char name[20];
  cout << "Enter your name: " << endl;
  cin >> name;

  int strLength = getStringLength(name);
  reverseString(name, strLength);

  cout << "Reversed Name is " << name << endl;
  return 0;
}