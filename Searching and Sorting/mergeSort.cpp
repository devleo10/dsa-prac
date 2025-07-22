#/*
Merge Sort - Theory and Approach:
---------------------------------
Merge sort is a divide-and-conquer sorting algorithm that divides the array into halves,
recursively sorts each half, and then merges the sorted halves.

Approach:
1. Divide the array into two halves.
2. Recursively sort each half.
3. Merge the two sorted halves into a single sorted array.

Time Complexity: O(n log n) in worst, average, and best cases.
Space Complexity: O(n) auxiliary space.
Stable: Yes (preserves relative order of equal elements).
*/
#include <iostream>
using namespace std;

// Merge two subarrays: arr[left..mid] and arr[mid+1..right]
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // size of left half
    int n2 = right - mid;     // size of right half

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else              arr[k++] = R[j++];
    }

    // Copy remaining elements of L[], if any
    while (i < n1) arr[k++] = L[i++];

    // Copy remaining elements of R[], if any
    while (j < n2) arr[k++] = R[j++];
}

// Recursive Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively divide
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Utility function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main
int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "\nSorted array:\n";
    printArray(arr, size);

    return 0;
}
