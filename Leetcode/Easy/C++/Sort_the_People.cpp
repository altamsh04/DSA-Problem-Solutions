class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> temp;
        map<int, string, greater<int>> sortedMap;

        for (size_t i = 0; i < names.size(); i++) {
            sortedMap[heights[i]] = names[i];
        }

        for (const auto& entry : sortedMap) {
            temp.push_back(entry.second);
        }
        
        return temp;
    }
};
