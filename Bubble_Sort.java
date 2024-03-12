public class Bubble_Sort {
    static void swap(int[] arr, int i, int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }

    static void bubbleSort(int[] arr) {
        int n = arr.length;
        boolean swapped = true;
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr, j, j + 1);
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }
    }

    static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {9, 14, 95, 12, 42, 51, 90};
        System.out.println("Unsorted Array:");
        printArray(arr);
        bubbleSort(arr);
        System.out.println("Sorted array in ascending order:");
        printArray(arr);
    }
}