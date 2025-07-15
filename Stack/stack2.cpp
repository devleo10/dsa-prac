#include<iostream>
using namespace std;
#define max 100

int arr[max];
int top=-1;

bool isFull(){
    return top>=max-1;
}
bool isEmpty(){
    return top<0;
}
void peek(){
    if(isEmpty()){
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<arr[top]<<endl;
    }

}
void push(int n){
    if(isFull()){
        cout<<"Stack overflow."<<endl;
    }
    else{
        arr[top]=n;
        top++;
    }

}
void pop(){
    if(isEmpty()){
        cout<<"Stack underflow."<<endl;
    }
    else{
        arr[top--];
    }
}
void display(){
    if(isEmpty()){
        cout<<"bhag."<<endl;
    }
    cout<<"Elements are: ";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int num;
    char c;
    do{
        cout<<"a.Peek."<<endl;
        cout<<"b.Push."<<endl;
        cout<<"c.Pop."<<endl;
        cout<<"d.display."<<endl;
        cout<<"e.Exit."<<endl;
        cin>>c;

        switch (c)
        {
        case 'a':
        peek();
            
            break;
        case 'b':
        cout<<"Enter element: "<<endl;
         cin>>num;
         push(num);
           break;
        case 'c':
        pop();
            
            break;
        case 'd':
        display();
            
            break;
        case 'e':
        cout<<"Quttting now..."<<endl;
            
            break;
        default:
        cout<<"Invaid input."<<endl;
            break;
        }

        
    }while(c!='e');
    return 0;

}