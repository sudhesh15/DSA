//Best Time to Buy & Sell Stocks
#include <iostream>
#include <climits>

using namespace std;

int main() {
  int arr[6] = {7, 1, 5, 3, 6, 4};
  int min_price = INT_MAX;
  int profit = 0;

  for (int i = 0; i < 6; i++) {
    if (arr[i] < min_price) {
      min_price = arr[i];
    } else if (arr[i] - min_price > profit) {
      profit = arr[i] - min_price;
    }
  }

  cout << "Maximum Profit: " << profit << endl;

  return 0;
}