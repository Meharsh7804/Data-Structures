#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    multiset<int> ms; // Declare a multiset of integers

    // Insert elements into the multiset (duplicates allowed)
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(30);
    ms.insert(20);

    // Display all elements in the multiset (sorted order, duplicates shown)
    cout << "Elements present in the multiset: ";
    for (auto it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Count occurrences of an element
    int n = 10;
    cout << "Count of " << n << " in multiset: " << ms.count(n) << endl;

    // Erase all occurrences of a value
    ms.erase(20);
    cout << "Elements after erasing all occurrences of 20: ";
    for (auto it = ms.begin(); it != ms.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert more elements
    ms.insert(40);
    ms.insert(10);

    // Display the size of the multiset
    cout << "The size of the multiset is: " << ms.size() << endl;

    // Check if the multiset is empty
    if (ms.empty())
        cout << "The multiset is empty" << endl;
    else
        cout << "The multiset is not empty" << endl;

    // Clear all elements from the multiset
    ms.clear();
    cout << "Size of the multiset after clearing: " << ms.size() << endl;

    return 0;
}