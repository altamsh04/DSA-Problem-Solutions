class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }
        
        if (totalSum % 3 != 0) {
            return false;
        }
        
        int targetSum = totalSum / 3;
        int currentSum = 0;
        int parts = 0;
        
        for (int num : arr) {
            currentSum += num;
            if (currentSum == targetSum) {
                parts++;
                currentSum = 0;
            }
        }
        
        return parts >= 3;
    }
};
