// Approch 1
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

// Approch 2 
// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int end = s.find_last_not_of(' ');
//         if (end == string::npos) 
//             return 0;
        
//         int start = s.find_last_of(' ', end);
//         return end - start;
//     }
// };
