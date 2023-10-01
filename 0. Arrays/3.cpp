//Reverse An Array
#include<iostream>
using namespace std;

void reversedArray(int arr[],int size){
  int s=0;
  int e=size-1;
  while(s<e){
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
}

void printArray(int arr[], int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int size;
  cout<<"Enter Size of an Array"<<endl;
  cin>>size;
  int arr[size];
  cout<<"Enter elements to Array"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  reversedArray(arr,size);
  printArray(arr,size);
  return 0;
}