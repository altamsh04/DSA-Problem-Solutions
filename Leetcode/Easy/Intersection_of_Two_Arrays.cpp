class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> u1;

        for (int num : nums1) {
            u1.insert(num);
        }

        vector<int> temp;

        for (int num : nums2) {
            if (u1.find(num) != u1.end()) {
                temp.push_back(num);
                u1.erase(num);
            }
        }
        return temp;
    }
};
