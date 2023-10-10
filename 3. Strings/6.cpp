//Conver Lowercase Sting to Uppercase Vice versa
#include <iostream>
#include <String>
using namespace std;

int main(){
  string str = "adwdajdhjalklkljlkjioujik";
  cout<<str<<endl;
  for(int i=0;i<str.length();i++){
    str[i] = str[i]-32;
  }
  cout<<str<<endl;
  for(int i=0;i<str.length();i++){
    str[i] = str[i]+32;
  }
  cout<<str<<endl;
}