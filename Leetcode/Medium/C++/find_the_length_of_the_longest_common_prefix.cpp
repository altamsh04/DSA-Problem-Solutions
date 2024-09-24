class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> uSet;
        int res = 0;

        for (auto num : arr1) {
            while (!uSet.count(num) && num > 0) {
                uSet.insert(num);
                num = num / 10;
            }
        }
        for (auto num : arr2) {
            while (!uSet.count(num) && num > 0) {
                num = num / 10;
            }

            if (num > 0) {
                res = max(res, static_cast<int> (log10(num) + 1));
            }
        }

        return res;
    }
};
