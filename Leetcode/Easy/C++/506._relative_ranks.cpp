class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        unordered_map<int, int> uMap;
        vector<string> ans(n, "");
        priority_queue<int> pq;

        for (int i = 0; i < n; i++) {
            uMap[score[i]] = i;
            pq.push(score[i]);
        }

        int rank = 1;

        while (!pq.empty()) {
            int topScore = pq.top();
            pq.pop();
            int index = uMap[topScore];
            
            if (rank == 1) {
                ans[index] = "Gold Medal";
            } else if (rank == 2) {
                ans[index] = "Silver Medal";
            } else if (rank == 3) {
                ans[index] = "Bronze Medal";
            } else {
                ans[index] = to_string(rank);
            }
            rank++;
        }

        return ans;
    }
};
