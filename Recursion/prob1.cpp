#include<bits/stdc++.h>
using namespace std;


void print() {
    static int count=0;

    if(count==3) return;
    cout << count << endl  ;
    count++;
    print();
}

 int main(){
    print();
    return 0;
 }