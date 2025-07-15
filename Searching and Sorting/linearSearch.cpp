#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class LS {
    public:
    int linearSearch(int arr[], int size,int key) {
    bool found=false;
    for ( int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
          found=true;
            cout<<"Element found at index: "<<i<<endl;
        }    

    }
    if (!found)
    {
     cout<<"Given element is not found.";
    }
    
}
};


int main() {
      int size;
      int key;
      cout<<"Enter the number of elements: "<<endl;
      cin>>size;
      int arr[size];
      cout<<"Enter the elements: "<<endl;
      for ( int i = 0; i < size; i++)
      {
        cin>> arr[i];
      }
      cout<<"Enter the element to be searched: "<<endl;
      cin>>key;
      LS huehue; 
      huehue.linearSearch(arr,size,key);


    return 0;
}
