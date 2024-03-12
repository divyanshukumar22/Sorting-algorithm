def swap(a, b):
    temp = a
    a = b
    b = temp
    return a, b

def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = swap(arr[i], arr[min_idx])
    return arr

def print_array(arr):
    for i in arr:
        print(i, end=" ")
    print()

if __name__ == "__main__":
    arr = [19, 4, 95, 22, 53, 11, 90]
    print("Unsorted Array:")
    print_array(arr)
    
    arr = selection_sort(arr)
    
    print("Sorted array in ascending order:")
    print_array(arr)
