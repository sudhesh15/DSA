//Split the binary string into substrings with equal number of 0s and 1s
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1;
  cout<<"Enter String s1"<<endl;
  cin>>s1;
  int l1=s1.length();
  int x=0,y=0;
  int c=0;

  for(int i=0;i<l1;i++){
    if(s1[i]=='0') x++;
    else y++;
    if(x==y) c++;
  }

  if(x!=y) return -1;
  else cout<<c;

  return 0;
}