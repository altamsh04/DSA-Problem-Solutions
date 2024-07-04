class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> topThreeElements;

        for (int num : nums) {
            topThreeElements.insert(num);
            if (topThreeElements.size() > 3) topThreeElements.erase(topThreeElements.begin());
        }

        return topThreeElements.size() == 3 ? *topThreeElements.begin() : *topThreeElements.rbegin();
    }
};
