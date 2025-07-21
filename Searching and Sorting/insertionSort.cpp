/*
Insertion Sort - Theory and Approach:
-------------------------------------
Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. It is much like sorting playing cards in your hands:
- The array is virtually split into a sorted and an unsorted part.
- Values from the unsorted part are picked and placed at the correct position in the sorted part.

Approach:
1. Start from the second element (index 1), as the first element is trivially sorted.
2. Compare the current element with the elements in the sorted part (to its left).
3. Shift all elements in the sorted part that are greater than the current element to one position ahead.
4. Insert the current element at its correct position.
5. Repeat until the array is sorted.

Time Complexity: O(n^2) in the worst and average case, O(n) in the best case (already sorted array).
Space Complexity: O(1) (in-place sorting).
Stable: Yes (does not change the relative order of equal elements).
*/

#include <iostream> 
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++) { // Loop from 0 to n-1 (each element to be inserted in sorted part)
        int j = i; // Set j to the current index i
        while(j > 0 && arr[j-1] > arr[j]) { // While not at the start and previous element is greater than current
            swap(arr[j], arr[j-1]); // Swap the elements to move the smaller one left
            j--; // Move to the previous index
        }
    }
}


int main() {
    int n; // Variable to store the size of the array
    cout << "Enter the size of the array: "; // Prompt user for array size
    cin >> n; // Read the array size from user

    int arr[n]; // Declare an array of size n
  
    cout <<"Enter the elements of the array:"<<endl; // Prompt user for array elements
    for(int i = 0; i < n; i++) { // Loop to read n elements
        cin >> arr[i]; // Read each element into the array
    }

    insertionSort(arr, n); // Call the insertionSort function to sort the array
    cout << "Sorted array: "; // Output message before displaying sorted array
    for(int i = 0; i < n; i++) { // Loop to print sorted array elements
        cout << arr[i] << " "; // Print each element followed by a space
    }
    return 0; // Indicate successful program termination
}
