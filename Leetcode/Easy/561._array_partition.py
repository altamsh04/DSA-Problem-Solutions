class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        if (len(nums) == 0):
            return 0
        
        sumOfNums = 0
        nums.sort()
        for i in range(0, len(nums), 2):
            sumOfNums += nums[i]

        return sumOfNums
