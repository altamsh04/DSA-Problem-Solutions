class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() <= 1) {return true;}

        int low = 0, high = s.length() - 1;

        while (low<high) {

            while (low<high && !isalnum(s[low])) {
                low++;
            }  

            while (low<high && !isalnum(s[high])) {
                high--;
            }

            if (low<high && tolower(s[low]) != tolower(s[high])) {
                return false;
            }

            low++;
            high--;
        }
        return true;
    }
};
