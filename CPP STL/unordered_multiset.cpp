#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    unordered_multiset<int> ums; // Declare an unordered_multiset of integers

    // Insert elements into the unordered_multiset (duplicates allowed)
    ums.insert(10);
    ums.insert(20);
    ums.insert(10);
    ums.insert(30);
    ums.insert(20);

    // Display all elements in the unordered_multiset
    cout << "Elements present in the unordered_multiset: ";
    for (auto it = ums.begin(); it != ums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Count occurrences of an element
    int n = 10;
    cout << "Count of " << n << " in unordered_multiset: " << ums.count(n) << endl;

    // Erase all occurrences of a value
    ums.erase(20);
    cout << "Elements after erasing all occurrences of 20: ";
    for (auto it = ums.begin(); it != ums.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert more elements
    ums.insert(40);
    ums.insert(10);

    // Display the size of the unordered_multiset
    cout << "The size of the unordered_multiset is: " << ums.size() << endl;

    // Check if the unordered_multiset is empty
    if (ums.empty())
        cout << "The unordered_multiset is empty" << endl;
    else
        cout << "The unordered_multiset is not empty" << endl;

    // Clear all elements from the unordered_multiset
    ums.clear();
    cout << "Size of the unordered_multiset after clearing: " << ums.size() << endl;

    return 0;
}