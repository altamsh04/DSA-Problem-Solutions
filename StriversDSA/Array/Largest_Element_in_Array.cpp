class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest = arr[0];
        // O(n)
        for (int i=0; i<arr.size(); i++) {
            if (arr[i] > largest) largest = arr[i]; 
        }
        return largest;
    }
};
