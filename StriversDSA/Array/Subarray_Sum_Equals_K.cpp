class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> uMap;
        uMap[0] = 1;
        
        int preSum = 0, count = 0;

        for (int i=0; i<nums.size(); i++) {
            preSum += nums[i];
            int rm = preSum - k;
            count += uMap[rm];
            uMap[preSum] += 1;
        }

        return count;
    }
};
