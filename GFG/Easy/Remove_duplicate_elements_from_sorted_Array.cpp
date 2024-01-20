class Solution{
public:
    int remove_duplicate(int a[],int n){

        if (n==0 || n==1) {
            return n;
        }

        int j=0;

	for (int i=0;i<n-1;i++) {
            if (a[i] != a[i+1]) {
                a[j] = a[i];
                j++;
            }
        }
        a[j] = a[n-1];
        j++;
        return j;
    }
};
