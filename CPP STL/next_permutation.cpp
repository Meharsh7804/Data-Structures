#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    // Display the original permutation
    cout << "Original permutation: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Generate the next permutation
    if (next_permutation(v.begin(), v.end())) {
        cout << "Next permutation: ";
        for (int num : v) cout << num << " ";
        cout << endl;
    } else {
        cout << "No next permutation exists (already the largest permutation)." << endl;
    }

    // Generate all permutations in order
    cout << "All permutations in order:" << endl;
    sort(v.begin(), v.end()); // Start from the smallest permutation
    do {
        for (int num : v) cout << num << " ";
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}