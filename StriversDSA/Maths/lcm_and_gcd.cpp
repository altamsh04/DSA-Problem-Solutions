class Solution {
  public:
    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcdValue = gcd(A, B);
        long long lcmValue = (A / gcdValue) * B;
        return {lcmValue, gcdValue};
    }
};
