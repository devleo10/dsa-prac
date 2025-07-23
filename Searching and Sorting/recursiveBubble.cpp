
#include<iostream>
using namespace std;

// Recursive Bubble Sort function
void recursiveBubbleSort(int arr[], int n) {
    // Base case: If array size is 1, return
    if (n == 1)
        return;

    // One pass of bubble sort: move largest to end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for remaining array
    recursiveBubbleSort(arr, n - 1);
}


int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[size];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    recursiveBubbleSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
