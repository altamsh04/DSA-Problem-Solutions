class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> uMap;
        for (auto& x : nums) {
            uMap[x]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            return uMap[a] != uMap[b] ? uMap[a] < uMap[b] : a > b; 
        });

        return nums;
    }
};
