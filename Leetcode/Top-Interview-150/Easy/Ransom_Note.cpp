class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mMap;

        for (int i = 0; i < magazine.size(); i++) mMap[magazine[i]]++; 

        for (int i = 0; i < ransomNote.size(); i++) {
            if (mMap[ransomNote[i]] > 0) {
                mMap[ransomNote[i]]--;
            } else {
                return false;
            }
        }

        return true;
    }
};
