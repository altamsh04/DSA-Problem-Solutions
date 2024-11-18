class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);
        
        if (k == 0) {
            return result;
        }
        
        int start = 1, end = k;
        if (k < 0) {
            start = k;
            end = -1;
        }
        
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            for (int j = start; j <= end; ++j) {
                int index = (i + j + n) % n;
                sum += code[index];
            }
            result[i] = sum;
        }
        
        return result;
    }
};
