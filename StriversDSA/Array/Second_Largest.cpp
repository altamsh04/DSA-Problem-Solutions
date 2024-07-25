class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // O(n)
        int largest = arr[0], secondLargest = -1;
        
        for (int i=0; i<arr.size(); i++) {
            if (arr[i] > largest && arr[i] != largest) {
                secondLargest = largest;
                largest = arr[i];
            }
            if (arr[i] > secondLargest && arr[i] < largest) {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
};
