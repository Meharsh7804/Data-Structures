// Generate a fibonacci series using recursion

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Base case: F(0) = 0
    } else if (n == 1) {
        return 1; // Base case: F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case: F(n) = F(n-1) + F(n-2)
    }
}

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n; // Input the number of terms

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " "; // Output each term in the series
    }
    cout << endl;

    return 0;
}