#include<bits/stdc++.h>
using namespace std;

void div(int n){
    int divisor =0;
    cout<< "The divisors of " << n << " are: ";
     for(int i=1; i<=n; i++){
        if(n%i==0){
            divisor ++;
            cout<< i << " "<<endl;
        } 
    }
    cout << "Total number of divisor:"<< divisor <<endl;
     
 
}

int main(){
    int n;
    cout << "Enter a number: " <<endl;
    cin >> n;

    div(n);
}