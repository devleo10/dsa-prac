#include<bits/stdc++.h>  // Include the necessary header files

using namespace std;  // Use the standard namespace

// Node class definition
class Node {
public:
    int data;  // Data of the node
    Node* next;  // Pointer to the next node

    // Constructor to initialize a Node with data and null next pointer
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    // Destructor to delete the current node and its linked nodes
    ~Node() {
        if (this->next != nullptr) {
            delete next;
            this->next = nullptr;
        }
    }
};

// Function to insert a new node after a specific element
void insertNode(Node* &tail, int element, int data) {
    if (tail == nullptr) {  // If the list is empty,
        Node* newNode = new Node(data);  // create a new node with the given data
        tail = newNode;  // set the tail to the new node
        newNode->next = newNode;  // make it circular
    } else {
        Node* curr = tail;  // Start from the tail
        while (curr->data != element) {  // Find the node with the specified element
            curr = curr->next;
        }
        Node* temp = new Node(data);  // Create a new node with the given data
        temp->next = curr->next;  // Insert the new node after the found node
        curr->next = temp;
    }
}

// Function to delete a node with a specific value
void deleteNode(Node* &tail, int val) {
    if (tail == nullptr) {  // If the list is empty,
        cout << "Empty" << endl;  // print "Empty"
        return;
    } else {
        Node* prev = tail;  // Start from the tail
        Node* curr = prev->next;  // Move to the first node
        while (curr->data != val) {  // Find the node with the specified value
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;  // Delete the found node
        if (tail == curr) {
            tail = prev;
        }
        if (curr == prev) {
            tail = nullptr;
        }
        curr->next = nullptr;
        delete curr;
    }
}

// Function to print the circular linked list
void print(Node* tail) {
    Node* temp = tail;

    if (tail == nullptr) {  // If the list is empty,
        cout << "Empty" << endl;  // print "Empty"
    }
    do {
        cout << temp->data << " ";  // Print the data of the current node
        temp = temp->next;  // Move to the next node
    } while (temp != tail);  // Continue until we reach the initial node
    {
        cout << endl;  // Print a newline after the loop (note: this block doesn't affect the program flow)
    }
}

int main() {
    Node* tail = nullptr;  // Initialize the tail pointer to nullptr
    insertNode(tail, 8, 4);  // Insert a node with data 4 after the element 8
    print(tail);  // Print the circular linked list
    insertNode(tail, 4, 5);  // Insert a node with data 5 after the element 4
    print(tail);  // Print the circular linked list
    insertNode(tail, 4, 9);  // Insert a node with data 9 after the element 4
    print(tail);  // Print the circular linked list
    deleteNode(tail, 9);  // Delete the node with data 9
    print(tail);  // Print the circular linked list
    deleteNode(tail, 5);  // Delete the node with data 5
    print(tail);  // Print the circular linked list
    deleteNode(tail, 4);  // Delete the node with data 4
    print(tail);  // Print the circular linked list

    return 0;  // Return 0 to indicate successful program execution
}

