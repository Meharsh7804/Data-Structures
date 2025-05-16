#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};

    // Display the vector
    cout << "Vector: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // Find the minimum element in the vector
    auto min_it = min_element(v.begin(), v.end());
    if (min_it != v.end()) {
        cout << "The minimum element is: " << *min_it << endl;
        cout << "The index of the minimum element is: " << distance(v.begin(), min_it) << endl;
    }

    // Find the minimum element in a part of the vector (first 4 elements)
    auto min_part = min_element(v.begin(), v.begin() + 4);
    if (min_part != v.begin() + 4) {
        cout << "The minimum element in the first 4 elements is: " << *min_part << endl;
        cout << "The index in the vector is: " << distance(v.begin(), min_part) << endl;
    }

    return 0;
}