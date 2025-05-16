#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    unordered_map<string, int> umap; // Declare an unordered_map with string keys and int values

    // Insert key-value pairs into the unordered_map
    umap["apple"] = 5;
    umap["banana"] = 3;
    umap["orange"] = 7;
    umap.insert({"grape", 2});

    // Display all key-value pairs in the unordered_map
    cout << "Elements present in the unordered_map:\n";
    for (auto it = umap.begin(); it != umap.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Access value using key
    cout << "\nThe value associated with 'banana' is: " << umap["banana"] << endl;

    // Check if a key exists
    string key = "apple";
    if (umap.find(key) != umap.end())
        cout << key << " is present in unordered_map" << endl;
    else
        cout << key << " is not present in unordered_map" << endl;

    // Erase an element by key
    umap.erase("orange");
    cout << "\nElements after deleting 'orange':\n";
    for (auto it = umap.begin(); it != umap.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    // Display the size of the unordered_map
    cout << "\nThe size of the unordered_map is: " << umap.size() << endl;

    // Check if the unordered_map is empty
    if (umap.empty())
        cout << "The unordered_map is empty" << endl;
    else
        cout << "The unordered_map is not empty" << endl;

    // Clear all elements from the unordered_map
    umap.clear();
    cout << "Size of the unordered_map after clearing: " << umap.size() << endl;

    return 0;
}