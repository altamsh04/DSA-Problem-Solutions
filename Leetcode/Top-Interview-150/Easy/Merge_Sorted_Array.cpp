class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
            int l = m + n;
            int i = 0;
            while (m<l) {
                nums1[m] = nums2[i];
                m++;
                i++;
            }
            std::sort(nums1.begin(), nums1.end());
    }
};