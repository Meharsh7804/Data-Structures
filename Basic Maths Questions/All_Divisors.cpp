// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
// A number which completely divides another number is called it's divisor.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> allDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    vector<int> divisors = allDivisors(n);
    cout << "All divisors of " << n << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}