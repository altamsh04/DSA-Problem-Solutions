// TC-> O(n+d) SC-> O(d)
class Solution{
public:
    void rotateArr(int arr[], int d, int n){
        // code here
        d = d % n;
        vector<int> temp;
        
        for(int i=0; i<d; i++) {
            temp.push_back(arr[i]);
        }
        for (int i=d; i<n; i++) {
            arr[i-d] = arr[i];
        }
        for (int i=n-d; i<n; i++) {
            arr[i] = temp[i-(n-d)];
        }
    }
};

// TC-> O(2n) SC-> O(1)
class Solution {
public:
    void reverseArray(vector<int>& arr, int low, int high) {
        while (low < high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
    }
};
