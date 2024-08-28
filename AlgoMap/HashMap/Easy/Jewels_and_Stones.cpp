class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> uMap;
        for (char ch : stones) {
            uMap[ch]++;
        }

        int count = 0;
        for (char ch : jewels) {
            count += uMap[ch];
        }
        return count;
    }
};
