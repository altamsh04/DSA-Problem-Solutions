class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for (auto num : nums) {
            if ((num + 1) % 3 == 0 || (num - 1) % 3 == 0) {
                ans++;
            }
        }
        return ans;
    }
};
