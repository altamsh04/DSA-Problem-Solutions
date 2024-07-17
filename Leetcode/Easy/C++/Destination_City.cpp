class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> startingCities;

        for (auto& path : paths) {
            startingCities.insert(path.front());
        }
        
        for (auto& path : paths) {
            if (startingCities.count(path.back()) == 0) {
                return path.back();
            }
        }
        
        return "";
    }
};
