class Solution {
public:
    int upperLimit; 
    int findKthNumber(int n, int k) {
        upperLimit = n;
        --k;
        long long currentPrefix = 1; 
        
        while (k) {
            int countOfNumbers = getCountOfNumbersWithPrefix(currentPrefix);
            if (k >= countOfNumbers) {
                k -= countOfNumbers;
                ++currentPrefix;
            } else {
                k--;
                currentPrefix *= 10;
            }
        }
        return static_cast<int>(currentPrefix);
    }

    int getCountOfNumbersWithPrefix(long long prefix) {
        long long nextPrefix = prefix + 1;
        int count = 0;

        while (prefix <= upperLimit) {
            count += min(static_cast<long long>(upperLimit) - prefix + 1, nextPrefix - prefix);
            nextPrefix *= 10;
            prefix *= 10;
        }
        return count;
    }
};
