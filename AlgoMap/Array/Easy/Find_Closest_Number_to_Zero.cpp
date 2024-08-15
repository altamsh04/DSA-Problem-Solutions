class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res = nums[0];
        for (auto num : nums) {
            if (abs(num) < abs(res)) {
                res = num;
            }
        }

        if (res < 0 && find(nums.begin(), nums.end(), abs(res)) != nums.end()) {
            return abs(res);
        }
        else {
            return res;
        }

        return -1;
    }
};
