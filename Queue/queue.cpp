#include<iostream>
using namespace std;
#define max 100

int arr[max];
int front=-1;
int rear=-1;

bool isFull(){
    return (rear == max-1); // Use equality operator instead of assignment operator
}
bool isEmpty(){
    return (front == -1 || front > rear); // Use equality operator instead of assignment operator
}
    
void insertItem(int n){ // Specify return type void
    if(isFull()){
        cout<<"Queue overflow."<<endl;
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=n;
        cout<<"Element "<<n<<" inserted."<<endl;
    }
}

void deleteItem(){ // Specify return type void
    if (isEmpty()){
        cout<<"Queue underflow."<<endl; // Correct the output message
    }
    else{
        cout<<"Removed: "<<arr[front]<<endl;
        front++;
    }
}

void display(){ // Specify return type void
    if (isEmpty()){
        cout<<"Queue is empty."<<endl; // Correct the output message
    }
    else{
        for (int i = front; i <=rear; i++){ // Start loop from front
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,c;
    do{
        cout<<"1. Insert."<<endl;
        cout<<"2. Delete."<<endl;
        cout<<"3. Display."<<endl;
        cout<<"4. Exit."<<endl;
        cin>>c;

        switch (c){
            case 1:
                cout<<"Enter element: "<<endl;
                cin>>n;
                insertItem(n);
                break;
            case 2:
                deleteItem();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Exiting...."<<endl;
                break;
            default:
                cout<<"Invalid input."<<endl;
                break;
        }
    } while (c!=4);
    
    return 0;
}
