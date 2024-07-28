class Solution:
    def numberOfPoints(self, nums: List[List[int]]) -> int:
        mySet = set()
        for start, end in nums:
            for i in range(start, end+1):
                mySet.add(i)

        return len(mySet)
