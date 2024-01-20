class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] <= firstMin) {
                secondMin = firstMin;
                firstMin = prices[i];
            }
            else if (prices[i] > firstMin && prices[i] < secondMin) {
                secondMin = prices[i];
            }
        }
        int total = firstMin + secondMin;

        if (money >= total) {
            return money - total;
        }
        return money;      
    }
};
