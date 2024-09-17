class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> wordCount;

        auto addWordsToCount = [&](const string& sentence) {
            stringstream stream(sentence);
            string word;
            while (stream >> word) {
                ++wordCount[word];
            }
        };

        addWordsToCount(A);
        addWordsToCount(B);

        vector<string> result;

        for (const auto& entry : wordCount) {
            if (entry.second == 1) {
                result.emplace_back(entry.first);
            }
        }

        return result;
    }
};
