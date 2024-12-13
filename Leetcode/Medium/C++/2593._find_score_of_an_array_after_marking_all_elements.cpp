class Solution {
public:
    long long findScore(vector<int>& nums) {
        int size = nums.size();
        vector<bool> visited(size, false);
        using ValueIndexPair = pair<int, int>;
        priority_queue<ValueIndexPair, vector<ValueIndexPair>, greater<ValueIndexPair>> min_heap;
      
        for (int i = 0; i < size; ++i) {
            min_heap.emplace(nums[i], i);
        }
      
        long long score = 0;
        while (!min_heap.empty()) {
            auto [value, index] = min_heap.top();
            min_heap.pop();
            score += value;
          
            visited[index] = true;
            if (index + 1 < size) {
                visited[index + 1] = true;
            }
            if (index - 1 >= 0) {
                visited[index - 1] = true;
            }
          
            while (!min_heap.empty() && visited[min_heap.top().second]) {
                min_heap.pop();
            }
        }
        return score;
    }
};
