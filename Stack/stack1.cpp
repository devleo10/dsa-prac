#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> s;
    s.push(6);
    s.push(9);
    s.push(9);
    


    cout<<s.size()<<endl;
    if(s.empty()){
        cout<<"Empty."<<endl;
    }
    else{
        cout<<"Not empty."<<endl;
    }

    return 0;
}