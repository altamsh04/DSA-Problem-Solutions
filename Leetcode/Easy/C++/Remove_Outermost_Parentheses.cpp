class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int counter = 0;
        for (auto str : s) {
            if (str == ')') counter--;
            if(counter != 0) ans.push_back(str);
            if (str == '(') counter++;
        }
        return ans;
    }
};
