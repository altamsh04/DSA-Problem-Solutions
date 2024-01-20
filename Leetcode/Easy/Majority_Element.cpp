class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
            int n = nums.size();
            map<int,int> mmap;
            int count = 0;
        
            for (int i=0;i<n;i++) {
                mmap[nums[i]]++;
            }
        
            for (auto num : mmap) {
                if (num.second > (n/2)) {
                    return num.first;
                }
            }
        
            return 0;
        }
};
