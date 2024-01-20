class Solution {
public:
    bool isValid(string s) {
    stack<char> stk;
    
    for (auto it : s) {
        if (it=='(' || it=='[' || it=='{') {
            stk.push(it);
        }
        else {
            if (stk.empty()) {
                return false;
            }
            char ch=stk.top();
            stk.pop();
            if((it == ')' and ch == '(') or  (it == ']' and ch == '[') or (it == '}' and ch == '{')) continue;
                else return false;
        }
    }
    return stk.empty();
    }
};
