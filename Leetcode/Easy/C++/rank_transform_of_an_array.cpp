class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> uMap;
        vector<int> temp(arr);
        
        ranges::sort(temp);

        for (const int num : temp) {
            if (!uMap.contains(num)) {
                uMap[num] = uMap.size() + 1;
            }
        }

        for (int& num : arr) {
            num = uMap[num];
        }

        return arr;
    }
};
