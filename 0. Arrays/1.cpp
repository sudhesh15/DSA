//Maximum and Minimum Element in an Array
#include<iostream>
#include <climits>
using namespace std;

int getMaximum(int arr[], int size){
  int max = INT_MIN;
  for(int i=0;i<size;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  return max;
}

int getMinimum(int arr[], int size){
  int min = INT_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]<min){
      min = arr[i];
    }
  }
  return min;
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
  cout<<"Maximum Element is "<<getMaximum(arr, size)<<endl;
  cout<<"Minimum Element is "<<getMinimum(arr, size)<<endl;
  return 0;
}