#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    vector<int> v = {3, 2, 1};

    // Display the original permutation
    cout << "Original permutation: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Generate the previous permutation
    if (prev_permutation(v.begin(), v.end())) {
        cout << "Previous permutation: ";
        for (int num : v) cout << num << " ";
        cout << endl;
    } else {
        cout << "No previous permutation exists (already the smallest permutation)." << endl;
    }

    // Generate all permutations in reverse order
    cout << "All permutations in reverse order:" << endl;
    sort(v.rbegin(), v.rend()); // Start from the largest permutation
    do {
        for (int num : v) cout << num << " ";
        cout << endl;
    } while (prev_permutation(v.begin(), v.end()));

    return 0;
}