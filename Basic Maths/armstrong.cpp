#include<bits/stdc++.h>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }
    return sum;
}

bool armstrong(int n) {
    return n == digitSum(n);
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    if (armstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
}