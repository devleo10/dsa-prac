#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++) {
        int j=i;
        while ( j > 0 && arr[j - 1] > arr[j]) {
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
        }
  }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
