//String - Length of String
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getStringLength(char name[]){
  int count=0;
  //Loop from 0 to until it reaches space
  for(int i=0; name[i] != '\0';i++){
    count++;
  }
  return count;
}

int main(){
  char name[20];
  cout<<"Enter your name "<<endl;
  cin>>name;

  cout<<"Length of your Name is "<<getStringLength(name)<<endl;
  return 0;
}