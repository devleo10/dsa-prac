#include<iostream>
using namespace std;

int selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        swap(arr[min], arr[i]);
    }
}

int main() {
    int arr[6] = {1, 2, 34, 4, 221, 23};

    selectionSort(arr,6);

    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
