#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }
    ~Node(){
        if (this->next!=NULL)
        {
        delete next;
        this->next=NULL;
        }
        

    }
};
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp= new Node(data);
        head=temp;
        tail=temp;

    }
    else{
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

}
void insertAtTail(Node* &head,Node* &tail,int data){

    if(tail==NULL){
        Node* temp= new Node(data);
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        
    }
    
    
}
void insertAtPosition(Node* &head, Node* &tail, int position,int data){
    if (position==1)
    {
        insertAtHead(head,tail,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }
    if(temp->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }

    Node* nodeToInsert= new Node(data);
     
     nodeToInsert->next=temp->next;
     temp->next->prev=nodeToInsert;
     temp->next=nodeToInsert;
     nodeToInsert->prev=temp;
}

void deleteNode(Node* &head,Node* &tail,int position){
if (position==1)
{
    Node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    if (head==NULL)
    {
        tail=NULL;
    }
    

}
else{

    Node* curr=head;
    Node* prev= NULL;

    int cnt=1;

    while (cnt<position)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;


}



}
void print(Node* head){

    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    cout<<" "<<endl;
}
int getlength(Node* head){
    int len=0;
    Node* temp=head;
     while(temp!=NULL){
        len++;
        temp=temp->next;
     }
     cout<<len;
     return len;
}

int main(){

    // Node* node1= new Node(10);
    Node* head=NULL;
    Node* tail=NULL; 
    insertAtHead(head,tail, 12); // Insert a new node with data 12 at the tail
    print(head);
    insertAtHead(head,tail, 15); // Insert a new node with data 15 at the tail
    print(head); // Print the linked list
    insertAtHead(head,tail, 22); // Insert a new node with data 22 at position 2
    print(head);
    insertAtTail(head,tail, 11); 
    print(head);
    deleteNode(head,tail,3);
    print(head);


}