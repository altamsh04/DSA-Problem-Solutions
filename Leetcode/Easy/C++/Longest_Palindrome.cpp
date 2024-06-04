class Solution {
public:
    int longestPalindrome(string s) {
    if (s.size() == 1) return s.size();
        int sum = 0;
        bool oddCount = false;

        unordered_map<char, int> map;
        for (char ch : s) {
            map[ch]++;
        }

        for (auto m : map) {
            if (m.second % 2 == 0) {
                sum += m.second;
            } else {
                sum += m.second - 1;
                oddCount = true;
            }
        }

        if (oddCount) sum += 1;

        return sum;
    }
};
