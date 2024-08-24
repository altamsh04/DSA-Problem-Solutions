class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int pairsCount = 0;
        vector<int> seen(101);

        for (int num : nums) {
            pairsCount += seen[num];
            seen[num] += 1;
        }
    
        return pairsCount;
    }
};
