class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> soldierCount;

        for (int i = 0; i < mat.size(); i++) {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            soldierCount.push_back({i, count});
        }

        sort(soldierCount.begin(), soldierCount.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second == b.second ? a.first < b.first : a.second < b.second;
        });

        vector<int> weakestRows;
        for (int i = 0; i < k; i++) {
            weakestRows.push_back(soldierCount[i].first);
        }

        return weakestRows;
    }
};
