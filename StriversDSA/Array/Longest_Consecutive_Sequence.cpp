class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int longestS = 1;
        unordered_set<int> set;

        for (int num : nums) {
            set.insert(num);
        }

        for (auto it : set) {
            if (set.find(it - 1) == set.end()) {
                int num = it;
                int count = 1;
                while (set.find(num + 1) != set.end()) {
                    num++;
                    count++;
                }

                longestS = max(longestS, count);
            }
        }
        return longestS;
    }
};
