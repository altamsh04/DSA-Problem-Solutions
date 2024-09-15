class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> uMap;

        for (auto num : nums) {
            if (++uMap[num] == 2) {
                ans.push_back(num);
                if (ans.size() == 2) break;
            }
        }

        return ans;
    }
};
