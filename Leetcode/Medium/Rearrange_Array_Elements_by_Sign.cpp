class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        vector<int> temp;

        for (auto num : nums) {
            if (num >= 0) { p.push_back(num); }
            else { n.push_back(num); }
        }
        
        for (int i=0; i<p.size() && i<n.size(); i++) {
            temp.push_back(p[i]);
            temp.push_back(n[i]);
        }
        return temp;
    }
};
