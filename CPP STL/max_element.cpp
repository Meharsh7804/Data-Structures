#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};

    // Display the vector
    cout << "Vector: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Find the maximum element in the vector
    auto max_it = max_element(v.begin(), v.end());
    if (max_it != v.end()) {
        cout << "The maximum element is: " << *max_it << endl;
        cout << "The index of the maximum element is: " << distance(v.begin(), max_it) << endl;
    }

    // Find the maximum element in a part of the vector (first 4 elements)
    auto max_part = max_element(v.begin(), v.begin() + 4);
    if (max_part != v.begin() + 4) {
        cout << "The maximum element in the first 4 elements is: " << *max_part << endl;
        cout << "The index in the vector is: " << distance(v.begin(), max_part) << endl;
    }

    return 0;
}