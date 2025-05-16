// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
// A palindrome number is a number which reads the same both left to right and right to left.

#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n; // Store the original number
    int reversed = 0; // Variable to store the reversed number

    // Reverse the number
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }

    return 0;
}