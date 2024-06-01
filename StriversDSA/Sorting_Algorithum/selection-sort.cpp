#include <bits/stdc++.h>

void selection_sort(int *arr, int n) {
    for (int i=0; i<n-1; i++) {
        int min = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        std::swap(arr[min], arr[i]);
    }
}

void print_array(int *arr, int n) {
    for (int i=0; i<n; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int n;
    int arr[n];
    std::cout<<"Enter size of array : ";
    std::cin>>n;

    for (int i=0; i<n; i++) {
        std::cout<<"Enter element "<<i+1<<" : ";
        std::cin>>arr[i];
    }

    selection_sort(arr, n);
    print_array(arr, n);
}