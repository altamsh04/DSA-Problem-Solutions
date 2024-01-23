class Solution {
public:
    int maxLength(vector<string>& arr, const string& current, int index) {
        // Approch 1
        // vector<string> validStrings = {""};
        // int max_length = 0;

        // for (const string& s : arr) {
        //     vector<string> currentStrings;

        //     for (const string& validStr : validStrings) {
        //         string newStr = validStr + s;
        //         unordered_set<char> uniqueChars(newStr.begin(), newStr.end());

        //         if (uniqueChars.size() == newStr.size()) {
        //             currentStrings.push_back(newStr);
        //             max_length = max(max_length, static_cast<int>(newStr.size()));
        //         }
        //     }
        //     validStrings.insert(validStrings.end(), currentStrings.begin(), currentStrings.end());
        // }
        // return max_length;

        // Approch 2 - Recurrsion
        unordered_set<char> uniqueChars(current.begin(), current.end());

        if (uniqueChars.size() != current.size()) {
            // Current string has duplicate characters, return 0
            return 0;
        }

        int result = current.size();

        for (int i = index; i < arr.size(); i++) {
            result = max(result, maxLength(arr, current + arr[i], i + 1));
        }

        return result;
    }

    int maxLength(vector<string>& arr) {
        return maxLength(arr, "", 0);
    }
};
