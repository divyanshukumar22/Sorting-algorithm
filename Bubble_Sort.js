function swap(arr, i, j) {
    let t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

function bubbleSort(arr) {
    let n = arr.length;
    let swapped = true;
    for (let i = 0; i < n - 1; i++) {
        swapped = false;
        for (let j = 0; j < n - i - 1; j++) {
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

function printArray(arr) {
    for (let i = 0; i < arr.length; i++) {
        console.log(arr[i], end=" ");
    }
    console.log();
}

let arr = [9, 14, 95, 12, 42, 51, 90];
console.log("Unsorted Array:");
printArray(arr);
bubbleSort(arr);
console.log("Sorted array in ascending order:");
printArray(arr);