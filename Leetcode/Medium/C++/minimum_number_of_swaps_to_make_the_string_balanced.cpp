class Solution {
public:
    int minSwaps(string s) {
        int openBrackets = 0;
        int minSwapsRequired = 0;

        for (auto c : s) {
            if (c == '[') {
                openBrackets++;
            }
            else if (openBrackets > 0) {
                openBrackets--;
            }
        }

        minSwapsRequired = (openBrackets + 1) / 2;

        return minSwapsRequired;
    }
};
