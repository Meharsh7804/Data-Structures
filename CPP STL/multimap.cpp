#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    multimap<string, int> mm; // Declare a multimap with string keys and int values

    // Insert key-value pairs into the multimap (duplicate keys allowed)
    mm.insert({"apple", 5});
    mm.insert({"banana", 3});
    mm.insert({"apple", 7});
    mm.insert({"grape", 2});
    mm.insert({"banana", 4});

    // Display all key-value pairs in the multimap (sorted by key)
    cout << "Elements present in the multimap:\n";
    for (auto it = mm.begin(); it != mm.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Count occurrences of a key
    string key = "apple";
    cout << "\nCount of '" << key << "' in multimap: " << mm.count(key) << endl;

    // Find and erase all pairs with a specific key
    mm.erase("banana");
    cout << "\nElements after erasing all pairs with key 'banana':\n";
    for (auto it = mm.begin(); it != mm.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Insert more elements
    mm.insert({"orange", 10});
    mm.insert({"apple", 8});

    // Display the size of the multimap
    cout << "\nThe size of the multimap is: " << mm.size() << endl;

    // Check if the multimap is empty
    if (mm.empty())
        cout << "The multimap is empty" << endl;
    else
        cout << "The multimap is not empty" << endl;

    // Clear all elements from the multimap
    mm.clear();
    cout << "Size of the multimap after clearing: " << mm.size() << endl;

    return 0;
}