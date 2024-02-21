class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> umap;

        for (char ch : s)
            umap[ch]++;

        int maxFreq = 0;
        for (const auto& entry : umap)
            maxFreq = max(maxFreq, entry.second);

        vector<string> buckets(maxFreq + 1);
        for (const auto& entry : umap)
            buckets[entry.second].append(entry.second, entry.first);

        string result;
        for (int i = maxFreq; i > 0; i--)
            result += buckets[i];

        return result;
    }
};
