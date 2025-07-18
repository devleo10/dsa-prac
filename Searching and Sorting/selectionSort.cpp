#include<iostream>
using namespace std;

int selectionSort(int arr[], int size) {


    for(int i = 0; i < size - 1; i++) {
        int minIndex=i;
        for(int j = i+1;j<size;j++) {
           if(arr[j] < arr[minIndex]){
            minIndex = j;
              }
          }
          int temp= arr[minIndex];
          arr[minIndex]=arr[i];
          arr[i] = temp;
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
    selectionSort(arr, size);
    return 0;
}
