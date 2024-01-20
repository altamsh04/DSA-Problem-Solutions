class Solution {
public:
    int climbStairs(int n) {
        // Dynamic programming approch.
        if (n == 1) return 1;

        int dp[n + 1];
        dp[1] = 1;
        dp[2] = 2;

        // Time complexity O(n) and Space complexity O(n)
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};
