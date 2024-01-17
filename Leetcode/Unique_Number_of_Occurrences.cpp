class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    // Approach 1
    std::unordered_map<int, int> count_unique;

    for (int i = 0; i < arr.size(); i++) {
        if (count_unique.find(arr[i]) == count_unique.end()) {
            count_unique[arr[i]] = 1;
        } else {
            count_unique[arr[i]]++;
        }
    }

    for (auto i = count_unique.begin(); i != count_unique.end(); ++i) {
        for (auto j = std::next(i); j != count_unique.end(); ++j) {
            if (i->second == j->second) {
                return false;
            }
        }
    }

    return true;

    // approach 2
    // std::unordered_map<int, int> count_unique;

    // for (int num : arr) {
    //     count_unique[num]++;
    // }

    // std::unordered_set<int> unique_counts;

    // for (const auto& pair : count_unique) {
    //     if (!unique_counts.insert(pair.second).second) {
    //         return false;
    //     }
    // }
    // return true;
    }
};
