// Recursion approch
class Solution {
public:
    vector<int> list;

    void recursion(int low, int high, int i, int n) {
        if (n>=low && n<=high) {
            list.push_back(n);
        }
        if (n>high || i>9) {
            return;
        }
        recursion(low, high, i+1, n*10+i);
    }

    vector<int> sequentialDigits(int low, int high) {
        for (int i=1; i<=9; i++) {
            recursion(low, high, i, 0);
        }
        sort(list.begin(), list.end());
        return list;
    }
};
