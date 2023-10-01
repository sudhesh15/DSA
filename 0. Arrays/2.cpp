//Linear Search 
#include<iostream>
using namespace std;

bool lienarSearch(int arr[],int n, int key){
  for(int i=0;i<n;i++){
    if(arr[i] == key){
      return true;
    }
  }
  return false;
}

int main(){
  int arr[10] = {1,3,5,7,9,11,13,15,17,19};
  //check whether 5 is prersent in this array ?

  int n=10;
  int key = 50;
  cout<<lienarSearch(arr, n, key)<<endl;
  return 0;
}