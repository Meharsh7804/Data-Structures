#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};

    // Display the original vector
    cout << "Original vector: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Sort the vector in ascending order
    sort(v.begin(), v.end());
    cout << "Sorted in ascending order: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Sort the vector in descending order
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted in descending order: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Sort a part of the vector (first 4 elements)
    sort(v.begin(), v.begin() + 4);
    cout << "First 4 elements sorted in ascending order: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    return 0;
}