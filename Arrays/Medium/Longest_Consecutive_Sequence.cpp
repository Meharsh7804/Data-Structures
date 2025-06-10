// Find the length of longest consecutive sequence in an array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void longest_consecutive_sequence(int arr[], int n) {
    sort(arr, arr + n); // Sort the array
    int max_length = 1; 
    int current_length = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            continue; // Skip duplicates
        }
        if (arr[i + 1] == arr[i] + 1) {
            current_length++; // Increment current sequence length
        } else {
            max_length = max(max_length, current_length); // Update max length
            current_length = 1; // Reset current length
        }
    }
    max_length = max(max_length, current_length); // Final check for the last sequence
    cout << "Length of the longest consecutive sequence: " << max_length << endl;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    longest_consecutive_sequence(arr, n);
    return 0;
}