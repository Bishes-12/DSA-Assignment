#include <stdio.h>
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    // Outer loop for each position in the array
    for (i = 0; i < n - 1; i++) {
        // Assume the current index is the minimum
        min_idx = i;
        // Find the index of the smallest element in the remaining array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Swap the found minimum element with the current element
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("Sorted array:   ");
    printArray(arr, n);
    return 0;
}