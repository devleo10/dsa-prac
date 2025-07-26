#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap current element with the smaller element
        }
    }
    swap(arr[i + 1], arr[high]); // Swap the pivot element with the element at i + 1
    return (i + 1); // Return the partitioning index
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pIndex =  partition(arr,low,high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
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

    quickSort(arr, 0, size - 1);

    cout << "\nSorted array:\n";
    printArray(arr, size);

    return 0;
}
