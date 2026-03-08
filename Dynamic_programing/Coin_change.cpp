/*Problem Statement
You are given:
An array of coin denominations
An integer amount
Each coin can be used unlimited times.
Return the minimum number of coins needed to make the amount.
If it is not possible, return -1.

Example 1
Input :- coins = [1,2,5] amount = 11
Output :- 3 (5 + 5 + 1)
*/
#include <iostream>
#include <vector>
using namespace std;

int coinChange(vector<int>& coins, int amount){
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;
    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (coin <= i) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

int main() {
    int n, amount;
    cin >> n >> amount;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    cout << "Minimum number of coins needed: " << coinChange(coins, amount) << endl;
    return 0;
}