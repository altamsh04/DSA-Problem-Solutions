class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        vector<int> res(n);
        using P = pair<int, int>;
        priority_queue<P, vector<P>, greater<>> pq;
        
        for (int i=0; i<n; i++) {
            pq.emplace(nums[i], i);
        }

        while (k--) {
            const auto [num, i] = pq.top();
            pq.pop();
            pq.emplace(num * multiplier, i);
        }

        while (!pq.empty()) {
            const auto [num, i] = pq.top();
            pq.pop();
            res[i] = num;
        }

        return res;
    }   
};
