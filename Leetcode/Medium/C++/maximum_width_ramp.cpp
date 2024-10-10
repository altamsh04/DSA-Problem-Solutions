class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> stk;
        int res = 0;

        for (int i=0; i<nums.size(); i++) {
            if (stk.empty() || nums[stk.top()] > nums[i]) {
                stk.push(i);
            }
        }

        for (int i=nums.size()-1; i>=0; i--) {
            while (!stk.empty() && nums[stk.top()] <= nums[i]) {
                res = max(res, i - stk.top());
                stk.pop();
            }
            if (stk.empty()) break;
        }

        return res;
    }
};
