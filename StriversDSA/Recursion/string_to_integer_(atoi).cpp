class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long ans = 0;
        int MIN = INT_MIN, MAX = INT_MAX;
        
        // Step 1: Skip leading whitespaces
        while (i < s.size() && s[i] == ' ') i++;
        
        // Step 2: Handle optional sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        // Step 3: Convert numbers and handle overflow/underflow
        while (i < s.size() && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');
            
            // Check for overflow
            if (sign == -1 && -ans < MIN) return MIN;
            if (sign == 1 && ans > MAX) return MAX;
            
            i++;
        }
        
        return (int)(sign * ans);
    }
};
