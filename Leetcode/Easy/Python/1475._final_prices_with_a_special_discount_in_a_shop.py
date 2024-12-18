class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        n = len(prices)
        result = prices[:]
        stack = []
        
        for i in range(n):
            while stack and prices[stack[-1]] >= prices[i]:
                index = stack.pop()
                result[index] -= prices[i]
            stack.append(i)
    
        return result
