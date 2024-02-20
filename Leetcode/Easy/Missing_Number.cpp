class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int size = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i <= size; i++) {
            if (i == size || i != nums[i]) {
                return i;
            }
            // By using XOR (^)
            // size ^= i ^ nums[i];
        }
        return -1;
    }
};
