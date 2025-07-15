#include <iostream>
using namespace std;

#define max 100

int stack[max];
int top = -1;

void push(int number) {
    if (top >= max - 1) {
        cout << "Stack overflow." << endl;
    } else {
        stack[++top] = number;
    }
}

int pop() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return -1; // Return an error value, since the stack is empty
    } else {
        return stack[top--];
    }
}

void display() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack Elements are: " << endl;
        pop();  // This will print and decrement the top index
    }
}


void decToBinary(int number) {
    while (number != 0) {
        push(number % 2);
        number = number / 2;
    }
}

int main() {
    int number;
    cout << "Enter the decimal number: ";
    cin >> number;
    decToBinary(number);

    cout << "Binary representation: ";
    while (top >= 0) {
        cout << pop();
    }
    
    return 0;
}
