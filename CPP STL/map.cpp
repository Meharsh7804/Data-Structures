#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    map<string, int> m; // Declare a map with string keys and int values

    // Insert key-value pairs into the map
    m["apple"] = 5;
    m["banana"] = 3;
    m["orange"] = 7;
    m.insert({"grape", 2});

    // Display all key-value pairs in the map (sorted by key)
    cout << "Elements present in the map:\n";
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Access value using key
    cout << "\nThe value associated with 'banana' is: " << m["banana"] << endl;

    // Check if a key exists
    string key = "apple";
    if (m.find(key) != m.end())
        cout << key << " is present in map" << endl;
    else
        cout << key << " is not present in map" << endl;

    // Erase an element by key
    m.erase("orange");
    cout << "\nElements after deleting 'orange':\n";
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Display the size of the map
    cout << "\nThe size of the map is: " << m.size() << endl;

    // Check if the map is empty
    if (m.empty())
        cout << "The map is empty" << endl;
    else
        cout << "The map is not empty" << endl;

    // Clear all elements from the map
    m.clear();
    cout << "Size of the map after clearing: " << m.size() << endl;

    return 0;
}