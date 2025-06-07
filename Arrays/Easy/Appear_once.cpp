// Find the number that appears once, and other numbers twice.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " elements";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= arr[i]; // XOR operation
    }
    cout << "The number that appears once is: " << unique << endl;
    return 0;
}