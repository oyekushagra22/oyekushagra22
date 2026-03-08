/*You are a professional robber planning to rob houses along a street.
Each house has a certain amount of money stored in it.
However, adjacent houses have security systems connected, and if two adjacent houses are robbed on the same night, the police will automatically be alerted.
Your task is to determine the maximum amount of money you can rob tonight without alerting the police.*/

/*Example 1
Input
nums = [1,2,3,1]
Explanation
Rob house 1 → money = 1
Rob house 3 → money = 3
Total:
1 + 3 = 4
Output
4 
*/

#include <iostream>
#include <vector>\
#include <stdlib.h>
#include <algorithm>
using namespace std;
int robber(vector<int>& nums) {
    if(nums.empty()) return 0;
    int n = nums.size();
    if(n == 1) return nums[0];
    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for(int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
    }
    return dp[n-1];
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Maximum amount that can be robbed: " << robber(nums) << endl;
    return 0;
}