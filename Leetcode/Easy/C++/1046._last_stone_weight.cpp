class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for (const auto n : stones) {
            pq.push(n);
        }
        
        while (pq.size() > 1) {
            int stone = pq.top(); pq.pop();
            stone -= pq.top();
            pq.pop();
            pq.push(abs(stone));
        }

        return pq.top();
    }
};
