/*70. Climbing Stairs
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Constraints: 1 <= n <= 45*/

#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    vector<int> dp(n + 1);
    dp[1] = 1; // 1 way to climb 1 step
    dp[2] = 2; // 2 ways to climb 2 steps

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2]; // The number of ways to climb to the current step
    }

    return dp[n];
}

int main() {
    int n;
    cin>> n;
    cout << "Number of ways to climb " << n << " steps: " << climbStairs(n) <<endl;
    return 0;
}