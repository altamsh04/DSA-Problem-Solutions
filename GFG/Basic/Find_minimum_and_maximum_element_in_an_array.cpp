pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> pair_temp;
    long long max = INT_MAX, min = INT_MIN;
    for (auto i=0;i<n;i++) {
        if (a[i] < max) {
            max = a[i];
        }
        if (a[i] > min) {
            min = a[i];
        }
    }

    pair_temp.first = max;
    pair_temp.second = min;
    return pair_temp;
}
