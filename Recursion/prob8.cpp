#include <iostream>
using namespace std;

int fiboNacci(int n) {
    if (n <= 1)
        return n;
    else
        return fiboNacci(n - 1) + fiboNacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        cout << fiboNacci(i) << " ";
    }

    return 0;
}
