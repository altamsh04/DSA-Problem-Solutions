class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(s.rbegin(), s.rend());

        for (int i=s.size()-1; i>=0; i--) {
            if (s[i] == '1') swap(s[i], s[s.size()-1]);
        }
        return s;
    }
};
