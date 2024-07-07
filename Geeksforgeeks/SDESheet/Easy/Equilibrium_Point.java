class Solution {
    public static int equilibriumPoint(long arr[]) {
        if (arr.length == 1) {
            return 1;
        }
        
        long totalSum = 0;
        for (long num : arr) {
            totalSum += num;
        }
        
        long leftSum = 0;
        for (int i = 0; i < arr.length; i++) {
            totalSum -= arr[i];
            
            if (leftSum == totalSum) {
                return i + 1;
            }
            
            leftSum += arr[i];
        }
        
        return -1;
    }
}