//this file is for my arrays lecture rough work
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){

  int arr1[10];
  cout<<"array's 0th index "<<arr1[0]<<endl; //It will return garbage value

  int arr2[5] = {1,3,5,7,9};
  cout<<"array's 3th index "<<arr2[3]<<endl; //7

  int n=5;
  cout<<"Looping through Array!"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";
  }
  // 1 3 5 7 9

  cout<<endl;
  //printing Array through function
  cout<<"printing Array through function"<<endl;
  printArray(arr2, n);
  cout<<endl;
  //find size of array

  int arraySize = sizeof(arr1)/sizeof(int);
  cout<<"Size of Array arr1 is "<<arraySize<<endl;//10

  return 0;
}