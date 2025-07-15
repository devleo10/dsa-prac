#include <iostream>
using namespace std;

// void printArray(int arr[]) {
//     cout << "The reversed array is: " << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

void revArr(int arr[5]) {
    int p1 = 0, p2 = 5 - 1;
    while (p2 > p1) {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }

       cout << "The reversed array is: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int i = 0;
    int arr[5];

    cout << "Enter the elements of the array: ";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    revArr(arr);

    return 0;
}






