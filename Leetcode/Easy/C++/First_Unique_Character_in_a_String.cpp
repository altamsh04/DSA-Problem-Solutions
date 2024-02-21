class Solution {
 public:
  int firstUniqChar(string s) {
    vector<int> frequency(26);

    for (const char c : s) {
        ++frequency[c - 'a'];
    }

    for (int i = 0; i < s.length(); ++i) {
      if (frequency[s[i] - 'a'] == 1) {
        return i;
      }
    }

    return -1;
  }
};
