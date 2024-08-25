class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = INT_MIN;
        for (int i = 0; i < accounts.size(); i++) {
            int cal = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                cal += accounts[i][j];
            }
            wealth = max(wealth, cal);
        }
        return wealth;
    }
};
