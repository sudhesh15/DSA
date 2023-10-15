//Find Duplicate characters in a string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1;
  cout<<"Enter String s1"<<endl;
  cin>>s1;
  map<char, int> m;
  int l1=s1.length();
  for(int i=0;i<l1;i++){
    m[s1[i]]++;
  }
  for(auto it : m){
    if(it.second>1){
      cout<<"Character "<<it.first<< " appeared "<<it.second<<" Times"<<endl;
    }
  }
  return 0;
}