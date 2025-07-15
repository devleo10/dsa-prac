/*
Theory:
Binary Search is an efficient algorithm for finding an item from a sorted array of elements. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

Approach:
1. Start with two pointers, start and end, at the beginning and end of the array.
2. Find the middle element.
3. If the middle element is the target, return its index.
4. If the target is less than the middle element, search the left half.
5. If the target is greater, search the right half.
6. Repeat until the element is found or the search space is empty.
*/

#include<iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

int binarySearch(int arr[],int size,int key){ // Function to perform binary search on an array
    int start=0; // Initialize start pointer
    int end=size-1; // Initialize end pointer
    int mid=start+(end-start)/2; // Calculate the middle index
    while (start<=end){ // Loop until start pointer is less than or equal to end pointer
        if (key==arr[mid]) // If the key is found at mid
        {
            return mid; // Return the index
        }
        else if(key>arr[mid]){ // If key is greater than mid element
            start=mid+1; // Move start to mid+1 to search right half
        }
        else { // If key is less than mid element
            end=mid-1; // Move end to mid-1 to search left half
        }
        // Example where (start + end) / 2 can overflow:
        // If start = 2,000,000,000 and end = 2,000,000,010
        // (start + end) = 4,000,000,010 (may overflow int limit)
        // (start + end) / 2 = overflow/2 = wrong result
        // But start + (end - start) / 2 = 2,000,000,000 + (10/2) = 2,000,000,000 + 5 = 2,000,000,005 (correct)
        mid= start+(end-start)/2; // Recalculate mid: e.g., if start=0, end=5, mid=2
    }
    return -1; // Return -1 if key is not found
}

int main(){
    int arr[6]={1,2,34,4,221,23}; // Declare and initialize the array
    int key=2; // Key to search for
    int index=binarySearch(arr,6,34); // Call binarySearch and store the result
    if (index!=-1) // If index is not -1, element is found
    {
        cout<<"Element found at index: "<<index<<endl; // Print the index
    }
    else{
        cout<<"Element not found."<<endl; // Print not found message
    }
}




