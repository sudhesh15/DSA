//Check if String is Palindrome
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getStringLength(char str[]) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    count++;
  }
  return count;
}

void reverseString(char str[], int strLength) {
  int s = 0;
  int e = strLength - 1;
  while (s < e) {
    swap(str[s], str[e]);
    s++;
    e--;
  }
}

int main() {
  char str[20];
  cout << "Enter a String: " << endl;
  cin >> str;

  int strLength = getStringLength(str);
  reverseString(str, strLength);

  char givenStr[20];
  strcpy(givenStr, str);
  strlwr(givenStr);
  strlwr(str);

  if (strcmp(givenStr, str) == 0)
    cout << "It's A Palindrome " << endl;
  else
    cout << "Not a Palindrome " << endl;
  return 0;
}
