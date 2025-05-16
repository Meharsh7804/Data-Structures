// You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.
// A prime number is a number which has no divisors except 1 and itself.

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true; // 2 and 3 are prime numbers

    // Check for even numbers greater than 2
    if (n % 2 == 0) return false;

    // Check for odd factors from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}   