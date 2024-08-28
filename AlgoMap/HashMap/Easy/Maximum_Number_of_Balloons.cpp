class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> uMap;
        for (char ch : text) {
            uMap[ch]++;
        }

        int b = uMap['b'];
        int a = uMap['a'];
        int l = uMap['l'] / 2;
        int o = uMap['o'] / 2;
        int n = uMap['n'];

        return min({b, a, l, o, n});
    }
};
