#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n){
    if(n <=1){
        cout << n<< " is not a prime number." << endl;
    }
    
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0){
            cout << n << " is not a prime number." << endl;
            return;
        }
    }
   
        cout << n << " is a prime number." << endl;
}

int main(){
int n;
cout<< "Enter a number: " <<endl;
cin >> n;
checkPrime(n);
}