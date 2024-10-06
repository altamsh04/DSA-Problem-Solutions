class Solution {
    deque<string> split(string &s) {
        istringstream ss(s);
        string word;
        deque<string> ans;
        while (ss >> word) ans.push_back(word);
        return ans;
    }
public:
    bool areSentencesSimilar(string a, string b) {
        if (a == b) return true;
        if (a.size() < b.size()) swap(a, b);
        auto A = split(a), B = split(b);
        while (B.size() && A.front() == B.front()) A.pop_front(), B.pop_front();
        while (B.size() && A.back() == B.back()) A.pop_back(), B.pop_back();
        return B.empty();
    }
};
