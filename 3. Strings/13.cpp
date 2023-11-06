//Remove Space and Replace by %40 optimized approach
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string input;
  cout << "Enter a String: " << endl;
  getline(cin, input); 

  int i=input.length()-1;
  int j=input.length()-1;
  
  while(input[i] == ' '){
    i--;
  }
  while(i>-1){
    if(input[i] == ' '){
      input[j--] = '0';
      input[j--] = '2';
      input[j--] = '%';
    }else{
      input[j--] = input[i];
    }
    i--;
  }
  cout << "Modified String: " <<  input << endl;
  return 0;
}
