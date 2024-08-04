// Kadane's algorithm - TC O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxNum = INT_MIN;

        for (const auto& num : nums) {
            sum += num;
            maxNum = max(maxNum, sum);
            if (sum < 0) sum = 0;
        }
        return maxNum;
    }
};
