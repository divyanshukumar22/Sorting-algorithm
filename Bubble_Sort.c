#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort(int arr[], int n) {
    int swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {9, 14, 95, 12, 42, 51, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted Array:\n");
    printArray(arr,n);
    bubbleSort(arr, n);
    printf("Sorted array in ascending order: \n");
    printArray(arr, n);
}