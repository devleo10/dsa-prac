#include<bits/stdc++.h>
using namespace std;


void countDigit( int n){
    int count=0;
    int lastDigit;
    while(n>0){
       lastDigit=n%10;
       count++;
       n=n/10;

    }
    cout<<count<<endl;
}

int main(){
 int n=0;
 cout<<"Enter a number: "<<endl;
 cin>>n;
 countDigit(n);

}