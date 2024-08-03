class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        x = 0
        y = 0
        for i in range(0, len(nums)):
            if (nums[i] > 9):
                x+=nums[i]
            else:
                y+=nums[i]
        return x!=y
