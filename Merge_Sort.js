function merge(arr, l, m, r) {
    const n1 = m - l + 1;
    const n2 = r - m;

    const L = new Array(n1);
    const R = new Array(n2);

    for (let i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (let j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    let i = 0, j = 0;

    let k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

function mergeSort(arr, l, r) {
    if (l < r) {
        const m = Math.floor(l + (r - l) / 2);

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

function printArray(arr) {
    console.log(arr.join(' '));
}

const arr = [10, 5, 25, 97, 20, 51, 80, 99, 101, 100];
const n = arr.length;

console.log("Unsorted Array:");
printArray(arr);

mergeSort(arr, 0, n - 1);

console.log("Sorted array in ascending order:");
printArray(arr);
