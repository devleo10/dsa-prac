#include <iostream> // for input/output stream
#include <bits/stdc++.h> // This includes a large number of headers, not recommended for production code

using namespace std; // Using the standard namespace

// Node class representing a node in the linked list
class Node {
public:
    int data; // Data of the node
    Node* next; // Pointer to the next node

    // Constructor to initialize a node with the given data
    Node(int data) {
        this->data = data; // Assigning the data
        this->next = NULL; // Initializing next as NULL
    }

    // Destructor to handle memory deallocation recursively
    ~Node() {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

// Function to insert a new node at the head of the linked list
void insertAtHead(Node*& head, int data) {
    Node* temp = new Node(data); // Create a new node with the given data
    temp->next = head; // Set the next of the new node to the current head
    head = temp; // Update the head to point to the new node
}

// Function to insert a new node at the tail of the linked list
void insertAtTail(Node*& tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// Function to insert a new node at a specific position in the linked list
void insertAtPosition(Node*& head, Node*& tail, int position, int data) {
    if (position == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to the position-1 in the linked list
    while (count < position - 1) {
        temp = temp->next;
        count++;
    }

    // If position is at the end, call insertAtTail
    if (temp->next == NULL) {
        insertAtTail(tail, data);
        return;
    }

    // Insert the new node at the specified position
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Function to delete a node from a specific position in the linked list
void deleteNode(Node*& head, Node*& tail, int position) {
    // If the position is the head of the list
    if (position == 1) {
        // Store the current head in a temporary pointer
        Node* temp = head;
        // Update the head to be the next node in the list
        head = head->next;
        // Set the next pointer of the temporary node to nullptr
        temp->next = nullptr;
        // Delete the temporary node
        delete temp;
        // If the list becomes empty, update the tail pointer to null
        if (head == nullptr) {
            tail = nullptr;
        }
    } else {
        // If the position is not the head
        // Initialize pointers for traversal
        Node* curr = head;
        Node* prev = nullptr;
        // Counter to keep track of the position
        int cnt = 1;

        // Traverse to the specified position in the linked list
        while (cnt < position) {
            // Update the previous and current pointers
            prev = curr;
            curr = curr->next;
            // Increment the counter
            cnt++;
        }

        // Adjust pointers to delete the node
        // Update the next pointer of the previous node to skip the current node
        prev->next = curr->next;
        // If the node being deleted is the tail, update the tail pointer
        if (curr == tail) {
            tail = prev;
        }
        // Set the next pointer of the current node to nullptr
        curr->next = nullptr;
        // Delete the current node
        delete curr;
    }
}


// Function to print the elements of the linked list
void print(Node*& head) {
    Node* pointer = head; // Initialize a temporary pointer to the head

    // Iterate through the list and print the data of each node
    while (pointer != NULL) {
        cout << pointer->data << " "; // Print the data of the current node
        pointer = pointer->next; // Move to the next node
    }

    cout << endl; // Print a new line after printing all the nodes
}

// Main function
int main() {
    Node* node1 = new Node(10); // Create a new node with data 10
    Node* head = node1; // Set the created node as the head of the list
    Node* tail = node1; // Set the created node as the tail of the list
    print(head); // Print the linked list

    insertAtHead(head, 12); // Insert a new node with data 12 at the tail
    print(head);
    insertAtHead(head, 15); // Insert a new node with data 15 at the tail
    print(head); // Print the linked list
    insertAtHead(head, 22); // Insert a new node with data 22 at position 2
    print(head);
    insertAtTail(tail, 11); // Delete the node at position 3
    print(head);
    insertAtPosition(head,tail,2,23);
    print(head);
    // cout << head->data << " " << tail->data; // Print the data of the head and tail nodes

    return 0; // Return 0 to indicate successful completion
}
