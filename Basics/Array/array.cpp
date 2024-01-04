#include <iostream>

int n = 5;
int count = 0;
void print_array(int *array, int n);
void insert_into_array(int *array, int value);

void print_array(int *array, int n) {
    for (auto i = 0; i < n; i++) {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int is_array_full() {
    if (count == n) {
        return 1;
    }
    return 0;
}

void insert_into_array(int *array, int value) {
    if (is_array_full()) {
        std::cout << "array is full" << std::endl;
    } else {
        array[count] = value;
        count++;
    }
}

int main() {
    int array[n];

    insert_into_array(array, 10);
    insert_into_array(array, 20);
    insert_into_array(array, 30);
    insert_into_array(array, 40);
    insert_into_array(array, 50);

    print_array(array, n);
	std::cout << (is_array_full() ? "array is full" : "array is not full") << std::endl;

    return 0;
}
