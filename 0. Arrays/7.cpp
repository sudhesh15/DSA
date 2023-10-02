//Find duplicates
//example {2,3,1,2,3} => 2,3
#include <iostream>
#include <unordered_map>
#include <vector>

void findDuplicates(const std::vector<int>& arr) {
  std::unordered_map<int, int> countMap;

  for (int num : arr) {
    countMap[num]++;
  }

  for (const auto& pair : countMap) {
    if (pair.second > 1) {
      std::cout << "Duplicate: " << pair.first << " (Count: " << pair.second << ")\n";
    }
  }
}

int main() {
  std::vector<int> arr = {1, 2, 3, 4, 3, 2, 5, 6, 1};
  findDuplicates(arr);
  return 0;
}