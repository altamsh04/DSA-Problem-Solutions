class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int, int> frequency;
        for (auto num : arr) {
            ++frequency[num];
        }

        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto& [num, freq] : frequency) {
            pq.push(freq);
        }

        int out = pq.size();
        while (k > 0 && !pq.empty()) {
            int top = pq.top();
            pq.pop();
            k -= top;
            if (k >= 0) {
                --out;
            }
        }

        return out;
    }
};
