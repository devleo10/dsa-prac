#include <bits/stdc++.h>
using namespace std;

#define max 10

class Queue{
    int arr[max];
    int front;
    int rear;


    public:
    Queue(){
        front=-1;
        rear=-1;

    }
    bool isEmpty(){
        return front==-1 && rear==-1;
    }
    bool isFull() {
        return (rear + 1) % max == front;
    }
    void enqueue(int n){
        if(isFull()){
            cout<<"Queue is full."<<endl;
            return;

        }
        if(isEmpty()){
            front=0;
            rear=0;
        }
        else{
            rear= (rear+1)%max;
        }
        arr[rear]=n;
    
    }
   void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }

    // Move the front to the next position in the circular queue
    front = (front + 1) % max;

    // Check if dequeueing resulted in an empty queue
    if (front == (rear + 1) % max) {
        front = rear = -1; // Reset front and rear to -1 to indicate an empty queue
    }
}
      void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % max;
        } while (i != (rear + 1) % max);

        cout << endl;
    }
};

int main() {
    Queue myQueue;
    int c, n;

    do {
        cout << "1. Enqueue.\n" << endl;
        cout << "2. Dequeue.\n" << endl;
        cout << "3. Display.\n" << endl;
        cout << "Enter your choice: " << endl;
        cin >> c;

        switch (c) {
            case 1:
                cout << "Enter: " << endl;
                cin >> n;
                myQueue.enqueue(n);
                break;
            case 2:
                myQueue.dequeue();
                break;
            case 3:
                myQueue.display();
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    } while (c <= 3);  // Change the loop condition to exit when the user inputs a value greater than 3

    return 0;
}