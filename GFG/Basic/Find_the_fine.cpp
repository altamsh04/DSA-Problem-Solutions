class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int totalSum = 0;
        for (int i = date % 2; i < n; i += 2) {
            totalSum += fine[i];
        }
        return totalSum;
    }
};
