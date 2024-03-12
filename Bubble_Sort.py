def swap(arr, i, j):
    t = arr[i]
    arr[i] = arr[j]
    arr[j] = t

def bubbleSort(arr):
    n = len(arr)
    swapped = True
    for i in range(n - 1):
        swapped = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                swap(arr, j, j + 1)
                swapped = True
        if not swapped:
            break

def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

arr = [9, 14, 95, 12, 42, 51, 90]
print("Unsorted Array:")
printArray(arr)
bubbleSort(arr)
print("Sorted array in ascending order:")
printArray(arr)