#include <iostream>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[] = {9, 14, 95, 12, 42, 51, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Unsorted Array:\n";
    printArray(arr,n);
    bubbleSort(arr, n);
    std::cout << "Sorted array in ascending order: \n";
    printArray(arr, n);
}