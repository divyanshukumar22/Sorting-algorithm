function swap(arr, index1, index2) {
    const temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

function selectionSort(arr) {
    const n = arr.length;
    for (let i = 0; i < n - 1; i++) {
        let minIndex = i;
        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr, i, minIndex);
    }
}

function printArray(arr) {
    console.log(arr.join(' '));
}

const arr = [19, 4, 95, 22, 53, 11, 90];

console.log("Unsorted Array:");
printArray(arr);

selectionSort(arr);

console.log("Sorted array in ascending order:");
printArray(arr);
