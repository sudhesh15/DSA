//Check whether one string is a rotation of another string
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1,s2;
  cout<<"Enter String s1 & s2"<<endl;
  cin>>s1>>s2;
  int l1 = s1.length();
  int l2 = s2.length();

  if(l1 != l2) cout<<"No, One String is a Rotation of Another String"<<endl;
  else{
    string temp=s1+s1;
    if(temp.find(s2)!=string::npos){
      cout<<"Yes, One String is a Rotation of Another String"<<endl;
    }else{
      cout<<"No, One String is a Rotation of Another String"<<endl;
    }
  }
  return 0;
}