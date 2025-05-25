// Find n! using recursion

#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the value of n
    int fact = factorial(n); // Call the function to calculate factorial
    cout << "Factorial of " << n << " is " << fact << endl; // Output the result
    return 0;
}