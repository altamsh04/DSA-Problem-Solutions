class Solution {
public:
    int lengthOfLastWord(string s) {
    int length = 0;
    bool foundNonSpace = false;

    for (int i = s.size() - 1; i >= 0; --i) {
        if (isspace(s[i])) {
            if (foundNonSpace) {
                break;
            }
        } else {
            foundNonSpace = true;
            ++length;
        }
    }
    return length;
    }
};
