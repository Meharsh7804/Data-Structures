// Stock buy and sell problem

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(const vector<int>& prices) {
    int max_profit = 0;
    int min_price = INT_MAX;

    for (int price : prices) {
        if (price < min_price) {
            min_price = price; // Update the minimum price
        } else if (price - min_price > max_profit) {
            max_profit = price - min_price; // Update the maximum profit
        }
    }

    return max_profit;
}

int main(){
    int n;
    cout << "Enter the number of days: ";
    cin >> n;
    
    vector<int> prices(n);
    cout << "Enter the stock prices for each day: ";
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    maxProfit(prices) > 0 ? cout << "Maximum profit is: " << maxProfit(prices) << endl
                          : cout << "No profit can be made." << endl;
}