#include <iostream>
using namespace std;

void checkPal(int i,string &s) {
   if (i>=s.size()/2) {
    cout<<"Palindrome."<< endl;
    return ;
   }
   if(s[i] !=s[s.size()-i-1]) {
     
    cout<<" Not Palindrome."<< endl;
    
   return ;
   }
   return checkPal(i+1,s);
   
   
    
}

int main() {
    string s;
   cout<<"Enter a string: "<<endl;
   cin>> s;
   checkPal(0,s);



    return 0;
}







