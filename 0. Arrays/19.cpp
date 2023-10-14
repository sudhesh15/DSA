//Find if there is any subarray with sum equal to 0
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[5] = {4,2,5,5,6};
  int size = 5;
  int f=0;
  for(int i=0;i<size;i++){
    int s=0;
    for(int j=i;j<size;j++){
      s=s+arr[j];
      if(s==0){
        f=1;
      }
    }
  }
  if(f==1){
    cout<<"TRUE"<<endl;
  }else{
    cout<<"FALSE"<<endl;
  }
  return 0;
}