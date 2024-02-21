// Sliding window, Hash map, Two pointers
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> add_frequence_t;
        for (auto get_chars : t) {
            add_frequence_t[get_chars]++;
        }
        unordered_map<char, int> add_frequences;
        int start = 0, end = 0;
        string output = "";
        while (end < s.length()) {
            add_frequences[s[end]]++;
            while (start < end && add_frequences[s[start]] > add_frequence_t[s[start]]) {
                add_frequences[s[start]]--;
                start++;
            }

            auto it = add_frequence_t.begin();
            while (it != add_frequence_t.end()) {
                int frq = it->second;
                char c = it->first;
                if (frq > 0 && add_frequences[c] < frq) {
                    break;
                }
                it++;
            }

            if (it == add_frequence_t.end()) {
                if (end - start + 1 < output.length() || output == "") {
                    output = s.substr(start, end - start + 1);
                }
            }
            end++;
        }
        return output;
    }
};
