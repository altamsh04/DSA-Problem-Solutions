class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = heights.size();

        for (int i = 0; i < n - 1; ++i) {
            int diff = heights[i + 1] - heights[i];
            if (diff > 0) {
                if (ladders > 0) {
                    pq.push(diff);
                    --ladders;
                } else if (!pq.empty() && pq.top() < diff) {
                    bricks -= pq.top();
                    pq.pop();
                    pq.push(diff);
                } else {
                    bricks -= diff;
                }

                if (bricks < 0) {
                    return i;
                }
            }
        }

        return n - 1;
    }
};
