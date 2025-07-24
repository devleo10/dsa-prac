#include<iostream>
using namespace std;
void recursiveSelectionSort(int arr[], int size, int start =0) {
    if(start >= size -1) return;

    int minIndex = start;
    for(int j =  start+1;j<size;j++) {
        if(arr[j] < arr[minIndex])
             minIndex = j;
    }
    swap(arr[start], arr[minIndex]);
    recursiveSelectionSort (arr,size,start + 1);

}

int main() {
    int size; 
    

    cout <<"Enter the size of the array: "<<endl;
    cin >> size;
    int arr[size];

    cout <<"Enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    recursiveSelectionSort(arr, size);
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
