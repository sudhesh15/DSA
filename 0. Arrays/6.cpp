//find uinque element
//XOR method - a^a=0
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[7] = {2,3,1,6,3,6,2};
  int res=0;
  int size=7;
  for(int i=0;i<size;i++){
    res=res^arr[i];
  }
  cout<<"Unique Element is "<<res<<endl;
  return 0;
}