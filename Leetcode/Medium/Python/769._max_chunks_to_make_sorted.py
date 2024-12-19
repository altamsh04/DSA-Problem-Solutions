class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        cur_max = -1
        res = 0

        for index, num in enumerate(arr):
            cur_max = max(num, cur_max)

            if cur_max == index:
                res+=1
    
        return res
