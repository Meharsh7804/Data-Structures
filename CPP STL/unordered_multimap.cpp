#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    unordered_multimap<string, int> umm; // Declare an unordered_multimap with string keys and int values

    // Insert key-value pairs into the unordered_multimap (duplicate keys allowed)
    umm.insert({"apple", 5});
    umm.insert({"banana", 3});
    umm.insert({"apple", 7});
    umm.insert({"grape", 2});
    umm.insert({"banana", 4});

    // Display all key-value pairs in the unordered_multimap
    cout << "Elements present in the unordered_multimap:\n";
    for (auto it = umm.begin(); it != umm.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Count occurrences of a key
    string key = "apple";
    cout << "\nCount of '" << key << "' in unordered_multimap: " << umm.count(key) << endl;

    // Find and erase all pairs with a specific key
    umm.erase("banana");
    cout << "\nElements after erasing all pairs with key 'banana':\n";
    for (auto it = umm.begin(); it != umm.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Insert more elements
    umm.insert({"orange", 10});
    umm.insert({"apple", 8});

    // Display the size of the unordered_multimap
    cout << "\nThe size of the unordered_multimap is: " << umm.size() << endl;

    // Check if the unordered_multimap is empty
    if (umm.empty())
        cout << "The unordered_multimap is empty" << endl;
    else
        cout << "The unordered_multimap is not empty" << endl;

    // Clear all elements from the unordered_multimap
    umm.clear();
    cout << "Size of the unordered_multimap after clearing: " << umm.size() << endl;

    return 0;
}