class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystackLength = haystack.length();
        int needleLength = needle.length();
        
        for(int i=0; i<haystackLength-needleLength+1; i++) {
            if (haystack.substr(i, needleLength) == needle) {
                return i;
            }
        }
        return -1;
    }
};
