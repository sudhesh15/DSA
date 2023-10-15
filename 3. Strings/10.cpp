//Check whether a string is a valid shuffle of two strings or not
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1,s2;
  cout<<"Enter String s1 & s2"<<endl;
  cin>>s1>>s2;
  string res;
  cout<<"Enter Resultant String Res"<<endl;
  cin>>res;
  int l1=s1.length();
  int l2=s2.length();
  int lr=res.length();

  if(l1+l2 != lr) cout<<"No, String is a Valid Shuffle of Two Strings"<<endl;
  int i=0,j=0,k=0;
  while(k<lr){
    if(i<l1 && s1[i]==res[k]) i++;
    else if(j<l2 && s2[j]==res[k]) j++;
    else break;
    k++;
  }
  if(i<l1 or j<l2) cout<<"No, String is a Valid Shuffle of Two Strings"<<endl;
  else cout<<"Yes, String is a Valid Shuffle of Two Strings"<<endl;
  return 0;
}