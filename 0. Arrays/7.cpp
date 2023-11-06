//Find duplicates
//example {2,3,1,2,3} => 2,3
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findDuplicates(vector<int> arr) {
  unordered_map<int,int> countMap;

  for(int num:arr){
    countMap[num]++;
  }
  for(const auto pair:countMap){
    if(pair.second>1){
      cout<<pair.first<<" "<<pair.second<<endl;
    }
  }
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 3, 2, 5, 6, 1};
  findDuplicates(arr);
  return 0;
}