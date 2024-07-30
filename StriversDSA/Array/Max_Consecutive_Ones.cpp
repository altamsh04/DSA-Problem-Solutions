class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int temp = 0;

        for (auto& num : nums) {
            if (num == 1) {
                count++;
                temp = max(temp, count);
            }
            else {
                count = 0;
            }
        }
        return temp;
    }
};
