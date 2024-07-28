class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> unionOfArray;
        int i=0;
        int j=0;
        
        while (i<n && j<m) {
            if (arr1[i] <= arr2[j]) {
                if (unionOfArray.size() == 0 || unionOfArray.back() != arr1[i]) {
                    unionOfArray.push_back(arr1[i]);
                }
                i++;
            }
            else {
                if (unionOfArray.size() == 0 || unionOfArray.back() != arr2[j]) {
                    unionOfArray.push_back(arr2[j]);
                }
                j++;
            }
        }
        while (i<n) {
            if (unionOfArray.size() == 0 || unionOfArray.back() != arr1[i]) {
                unionOfArray.push_back(arr1[i]);
            }
            i++;
        }
        while (j<m) {
            if (unionOfArray.size() == 0 || unionOfArray.back() != arr2[j]) {
                unionOfArray.push_back(arr2[j]);
            }
            j++;
        }
        
        return unionOfArray;
    }
};
