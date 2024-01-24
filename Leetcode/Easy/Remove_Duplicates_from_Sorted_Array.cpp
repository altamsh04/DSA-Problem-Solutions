class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // Approch 1 - Not efficiant
        // unordered_set<int> temp;
        // vector<int> vtemp;
        // int k = 0;
        // for (int num : nums) {
        //     temp.insert(num);
        // }
        
        // for (int num : temp) {
        //     vtemp.push_back(num);
        // }
        
        // for (int i=vtemp.size()-1; i>=0; i--) {
        //     nums[k] = vtemp[i];
        //     k++;
        // }

        // return k;

        // Approch 2
        if (nums.empty()) {
            return 0;
        }

        int k = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[k++] = nums[i];
            }
        }

        return k;
    }
};
