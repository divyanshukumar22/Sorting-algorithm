#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[] = {19, 4, 95, 22, 53, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Unsorted Array:" << std::endl;
    printArray(arr, n);

    selectionSort(arr, n);

    std::cout << "Sorted array in ascending order:" << std::endl;
    printArray(arr, n);

    return 0;
}
