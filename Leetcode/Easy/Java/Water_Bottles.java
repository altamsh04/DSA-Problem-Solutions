class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int result = 0;
        int empty = 0;
        while (numBottles > 0) {
            result = result + numBottles;
            empty = empty + numBottles;
            numBottles = empty / numExchange;
            empty = empty % numExchange;
        }
        return result;
    }
}
