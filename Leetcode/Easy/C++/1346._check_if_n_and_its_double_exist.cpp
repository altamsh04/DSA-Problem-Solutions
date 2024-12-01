class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // O(n) Approch
        unordered_set<int> uSet;
        for (auto num : arr) {
            if (uSet.count(num*2) || (num%2==0 && uSet.count(num/2))) 
                return true;
            uSet.insert(num);
        }
        
        // O(n2) Approch
        // for (int i=0; i<arr.size(); i++) {
        //     for (int j=0; j<arr.size(); j++) {
        //         if (arr[i] == arr[j]*2 && i != j) return true;
        //     }
        // }

        return false;
    }
};
