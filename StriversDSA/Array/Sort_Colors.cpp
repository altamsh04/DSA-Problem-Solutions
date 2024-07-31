class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countOfZeros = 0, countOfOnes = 0, countOfTwos = 0;

        for (const auto& num : nums) {
            if (num == 0) {
                countOfZeros++;
            }
            else if (num == 1) {
                countOfOnes++;
            }
            else {
                countOfTwos++;
            }
        }
        
        int index = 0;
        for (int i = 0; i < countOfZeros; i++) {
            nums[index++] = 0;
        }
        for (int i = 0; i < countOfOnes; i++) {
            nums[index++] = 1;
        }
        for (int i = 0; i < countOfTwos; i++) {
            nums[index++] = 2;
        }
    }
};
