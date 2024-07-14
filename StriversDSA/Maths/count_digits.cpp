class Solution{
public:
    int evenlyDivides(int N){
        int temp = N;
        int countOfDivides = 0;
        while (N > 0) {
            int digit = N % 10;
            N = N / 10;
            if (digit != 0 && temp % digit == 0) {
                countOfDivides++;
            }
        }
        return countOfDivides;
    }
};
