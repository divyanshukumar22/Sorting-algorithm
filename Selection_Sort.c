#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {19, 4, 95, 22, 53, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted Array:\n");
    printArray(arr,n);
    selectionSort(arr, n);
    printf("Sorted array in ascending order: \n");
    printArray(arr, n);
}