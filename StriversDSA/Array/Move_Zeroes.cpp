class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastZerosIndex = 0;

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                nums[lastZerosIndex++] = nums[i]; 
            }
        }
        
        for (int i=lastZerosIndex; i<nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
