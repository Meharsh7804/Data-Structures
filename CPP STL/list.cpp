#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    list<int> lst; // Declare a list of integers

    // Insert elements at the back and front
    lst.push_back(10);
    lst.push_back(20);
    lst.push_front(5);
    lst.push_front(1);

    // Display all elements in the list
    cout << "Elements in the list: ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove an element by value (removes all occurrences)
    lst.remove(10);
    cout << "Elements after removing 10: ";
    for (auto it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert element at position 2
    auto it = lst.begin();
    advance(it, 2);
    lst.insert(it, 15);
    cout << "Elements after inserting 15 at position 2: ";
    for (auto val : lst) {
        cout << val << " ";
    }
    cout << endl;

    // Display the front and back elements
    cout << "Front element: " << lst.front() << endl;
    cout << "Back element: " << lst.back() << endl;

    // Display the size of the list
    cout << "The size of the list is: " << lst.size() << endl;

    // Check if the list is empty
    if (lst.empty())
        cout << "The list is empty" << endl;
    else
        cout << "The list is not empty" << endl;

    // Clear all elements from the list
    lst.clear();
    cout << "Size of the list after clearing: " << lst.size() << endl;

    return 0;
}