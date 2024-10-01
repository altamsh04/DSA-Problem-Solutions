class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> count(k, 0);
      
        for (int number : arr) {
            int modValue = ((number % k) + k) % k;
            ++count[modValue];
        }
      
        for (int i = 1; i < k; ++i) {
            if (count[i] != count[k - i]) {
                return false;
            }
        }
      
        return count[0] % 2 == 0;
    }
};
