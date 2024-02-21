class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> temp;
        unordered_set<int> set;
        int sum = 0;

        for (auto num : nums) {
            if (set.find(num) != set.end()) {
                temp.push_back(num);
            }
            else {
                set.insert(num);
                sum+=num;
            }
        }
        int n = nums.size();
        int t = n * (n+1) / 2;
        temp.push_back(t-sum);
        return temp;
    }
};
