#include<iostream>
using namespace std;

int bubbleSort(int arr[], int size) {


    for(int i = size-1; i >= 1; i--) {
        for(int j = 0;j<i-1;j++) {
           if(arr[j] > arr[ j + 1 ]){
              swap(arr[j],arr[j+1]);
              }
          }
      }

      cout << "Sorted array: ";
      for(int i = 0; i < size; i++) {
          cout << arr[i] << " ";
      }
      cout << endl;
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
    bubbleSort(arr, size);
    return 0;
}
