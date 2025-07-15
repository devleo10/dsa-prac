#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void updateElement(int arr[], int size) {
    int pos, newValue;
    cout << "Enter position and new value: ";
    cin >> pos >> newValue;
    if (pos >= 0 && pos < size) {
        arr[pos] = newValue;
        cout << "Element updated successfully.\n";
    } else {
        cout << "Invalid position.\n";
    }
}

void insertElement(int arr[], int& size) {
    int pos, newValue;
    cout << "Enter position and value to insert: ";
    cin >> pos >> newValue;
    if (pos >= 0 && pos <= size && size < MAX_SIZE) {
        for (int i = size; i > pos; --i) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = newValue;
        size++;
        cout << "Element inserted successfully.\n";
    } else {
        cout << "Invalid position or array full.\n";
    }
}

void searchElement(const int arr[], int size) {
    int target;
    cout << "Enter element to search: ";
    cin >> target;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            cout << "Element found at position " << i << ".\n";
            return;
        }
    }
    cout << "Element not found in the array.\n";
}

void removeElement(int arr[], int& size) {
    int pos;
    cout << "Enter position of element to remove: ";
    cin >> pos;
    if (pos >= 0 && pos < size) {
        for (int i = pos; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element removed successfully.\n";
    } else {
        cout << "Invalid position.\n";
    }
}

void displayElement(const int arr[], int size) {
    int pos;
    cout << "Enter position of element to display: ";
    cin >> pos;
    if (pos >= 0 && pos < size) {
        cout << "Element at position " << pos << ": " << arr[pos] << endl;
    } else {
        cout << "Invalid position.\n";
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    char choice;

    do {
        cout << "\nMenu:\n";
        cout << "a. Update an element\n";
        cout << "b. Insert an element\n";
        cout << "c. Search an element\n";
        cout << "d. Remove an element\n";
        cout << "e. Display an element\n";
        cout << "x. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 'a':
                updateElement(arr, size);
                break;
            case 'b':
                insertElement(arr, size);
                break;
            case 'c':
                searchElement(arr, size);
                break;
            case 'd':
                removeElement(arr, size);
                break;
            case 'e':
                displayElement(arr, size);
                break;
            case 'x':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 'x');

    return 0;
}
