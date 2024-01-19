class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        if (N != B.size()) {
            return false;
        }

        unordered_map<ll, int> countA, countB;

        for (int i = 0; i < N; i++) {
            countA[A[i]]++;
        }

        for (int i = 0; i < N; i++) {
            countB[B[i]]++;
        }

        return countA == countB;
    }
};
