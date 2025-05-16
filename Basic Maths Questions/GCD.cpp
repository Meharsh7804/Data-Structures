// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    // Base case: if b is 0, return a
    if (b == 0)
        return a;
    // Recursive case: call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    int result = gcd(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << result << endl;

    return 0;
}