//Kadane's Algorithm - Maximum Subarray
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
  long long max = LONG_MIN;
  long long sum = 0;

  for(int i=0;i<n;i++){
    sum=sum+arr[i];
    if(sum>max){
      max=sum;
    }
    if(sum<0){
      sum=0;
    }
  }
  return max;
}

int main(){
  int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  long long maxSum = maxSubarraySum(arr, n);
  cout << "The maximum subarray sum is: " << maxSum << endl;
  return 0;
}