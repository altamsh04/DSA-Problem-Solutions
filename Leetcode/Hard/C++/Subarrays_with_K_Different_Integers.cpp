class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        vector<int> subarrayStartsWithK = countSubarraysStartingPoint(nums, k);
        vector<int> subarrayStartsWithKMinusOne = countSubarraysStartingPoint(nums, k - 1);
        int totalSubarrays = 0;

        for (int i = 0; i < nums.size(); ++i) {
            totalSubarrays += subarrayStartsWithKMinusOne[i] - subarrayStartsWithK[i];
        }

        return totalSubarrays;
    }

    vector<int> countSubarraysStartingPoint(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> startPos(n);
        int count[n + 1];
        memset(count, 0, sizeof(count)); 
        int distinctNums = 0; 

        for (int i = 0, j = 0; i < n; ++i) {
            if (++count[nums[i]] == 1) {
                ++distinctNums;
            }
          
            for (; distinctNums > k; ++j) {
                if (--count[nums[j]] == 0) {
                    --distinctNums;
                }
            }
          startPos[i] = j;
        }

        return startPos;
    }
};
