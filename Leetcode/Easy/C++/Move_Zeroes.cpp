class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // eg. [0, 1, 0, 3, 12]

        int lastZerosIndex = 0;

        // find non zero and move to the front where lastZerosIndex points
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) { nums[lastZerosIndex++] = nums[i]; }
        }

        // Replace the remaining part with zeros start from lastZerosIndex index
        for (int i=lastZerosIndex; i<nums.size(); i++) {nums[i] = 0;}


        // First approch not optimized take extra space
        // vector<int> nonZeros;
        // int zerosCount=nums.size();
        // for (int i=0; i<nums.size(); i++) {
        //     if (nums[i]!=0) {
        //         nonZeros.push_back(nums[i]);
        //         zerosCount--;
        //     }
        // }

        // while (zerosCount != 0) {
        //     nonZeros.push_back(0);
        //     zerosCount--;
        // }

        // nums = nonZeros;
    }
};
