//Square root using binary search
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int squareRoot(int k){
  int s=0;
  int e=k;
  int mid=(s+e)/2;

  int ans=-1;
  while(s<=e){
    int square = mid*mid;

    if(square == mid){
      return mid;
    } 

    if(square<k){
      ans=mid;
      s=mid+1;
    }else{
      e=mid-1;
    }
    mid=(s+e)/2;
  }
  return ans;
}

int main(){
  int k = 27;
  //minimum element in graph is pivot
  cout<<"Square root using binary search "<<squareRoot(k);
  return 0;
}