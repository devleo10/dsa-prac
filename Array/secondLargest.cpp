#include<bits/stdc++.h>
using namespace std;


int slargest(int arr[], int n){
     int ans = INT_MIN;

     for(int i=0;i<n;i++){
        if(arr[i]>ans)
        ans=arr[i];
     }

     int second_largest = INT_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]!=ans)
        second_largest = max(second_largest,arr[i]);
     }
       return second_largest;
}

int main(){
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];

    cout <<"Enter the elements of the array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    slargest(arr,n);
    cout<<"The second largest element is: "<<slargest(arr,n)<<endl;
}