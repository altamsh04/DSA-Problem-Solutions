class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res = 0; 
        int lastMinIndex = -1, lastMaxIndex = -1, lastIndexOutsideRange = -1; 
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < minK || nums[i] > maxK) {
                lastIndexOutsideRange = i;
            } 
            if (nums[i] == minK) {
                lastMinIndex = i;
            }
            if (nums[i] == maxK) {
                lastMaxIndex = i;
            }

            res += max(0, min(lastMinIndex, lastMaxIndex) - lastIndexOutsideRange);
        }

        return res;
    }
};
