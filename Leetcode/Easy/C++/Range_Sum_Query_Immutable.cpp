class NumArray {
private:
    vector<int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        int size = nums.size();
        prefixSum.resize(size + 1);
        prefixSum[0] = 0;

        for (int i = 0; i < size; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
