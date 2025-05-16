// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n; // Store the original number
    int sum = 0; // Variable to store the sum of digits raised to the power of number of digits
    int numDigits = 0; // Variable to store the number of digits

    // Count the number of digits
    while (n > 0) {
        n /= 10;
        numDigits++;
    }

    n = original; // Reset n to original for the next loop

    // Calculate the sum of digits raised to the power of number of digits
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        sum += pow(digit, numDigits); // Add the digit raised to the power of numDigits
        n /= 10; // Remove the last digit from n
    }

    // Check if the original number is equal to the sum
    return original == sum;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an armstrong number." << endl;
    } else {
        cout << n << " is not an armstrong number." << endl;
    }

    return 0;
}