class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(vector<int> &arr1, vector<int> &arr2, int x) {
       vector<pair<int, int>> result;
        int n1 = arr1.size();
        int n2 = arr2.size();

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int i = 0, j = n2 - 1;
        while (i < n1 && j >= 0) {
            int sum = arr1[i] + arr2[j];
            if (sum == x) {
                result.push_back({arr1[i], arr2[j]});
                i++;
                j--;
            } else if (sum < x) {
                i++;
            } else {
                j--;
            }
        }
        
        return result;

    }
};
