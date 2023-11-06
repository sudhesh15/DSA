//Best Time to Buy & Sell Stocks
#include <iostream>
#include <climits>

using namespace std;

int main() {
  int arr[6] = {7, 1, 5, 3, 6, 4};
  int buy, profit;
	buy = INT_MAX;
	profit = 0;

	for (int i = 0; i < 6; i++) {
		buy = min(buy, arr[i]);
		profit = max(profit, arr[i] - buy);
	}
  
  cout << "Maximum Profit: " << profit << endl;

  return 0;
}