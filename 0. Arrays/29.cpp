//Majority Element greater than N/2 or N/3

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (v[j] == v[i]) {
        cnt++;
      }
    }
    if (cnt > (n / 2))
    return v[i];
  }
  return -1;
}

int main()
{
  vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
  int ans = majorityElement(arr);
  cout << "The majority element is: " << ans << endl;
  return 0;
}

