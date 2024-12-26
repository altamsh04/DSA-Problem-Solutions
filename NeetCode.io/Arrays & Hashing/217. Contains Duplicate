class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        
        for (int i=0;i<nums.size();i++) {
            int num = nums[i];
            if (temp.find(num) != temp.end()) {
                return true;
            }
            temp.insert(nums[i]);
        }
        return false;
    }
};
