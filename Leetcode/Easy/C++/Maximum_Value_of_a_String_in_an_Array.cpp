class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxValue = 0;
        for (const auto& str : strs) {
            bool isAllDigits = true;
            int value = 0;

            for (char c : str) {
                if (!isdigit(c)) {
                    isAllDigits = false;
                    break;
                }
            }

            if (isAllDigits) {
                value = stoi(str);
            } else {
                value = str.length();
            }

            maxValue = max(maxValue, value);
        }

        return maxValue;
    }
};
