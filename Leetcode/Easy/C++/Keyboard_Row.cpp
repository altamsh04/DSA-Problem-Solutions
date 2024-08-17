class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string keyboard = "qwertyuiopasdfghjklzxcvbnm";
        unordered_map<char, int> uMap;
        for (int i = 0; i < keyboard.size(); ++i) {
            if (i <= 9) uMap[keyboard[i]] = 1;
            else if (i <= 18) uMap[keyboard[i]] = 2;
            else uMap[keyboard[i]] = 3;
        }
        
        vector<string> ans;
        for (auto s : words) {
            int flag = 1;
            int r = uMap[tolower(s[0])];
            for (int i=1; i<s.size(); i++) {
                if (uMap[tolower(s[i])] != r) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                ans.push_back(s);
            }
        }
        return ans;
    }
};
