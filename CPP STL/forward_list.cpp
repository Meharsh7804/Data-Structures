#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    forward_list<int> fl; // Declare a forward_list of integers

    // Insert elements at the front (no push_back in forward_list)
    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(5);

    // Display all elements in the forward_list
    cout << "Elements in the forward_list: ";
    for (auto it = fl.begin(); it != fl.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert after the first element
    auto it = fl.begin();
    fl.insert_after(it, 15);
    cout << "Elements after inserting 15 after the first element: ";
    for (auto val : fl) {
        cout << val << " ";
    }
    cout << endl;

    // Remove an element by value (removes all occurrences)
    fl.remove(10);
    cout << "Elements after removing 10: ";
    for (auto val : fl) {
        cout << val << " ";
    }
    cout << endl;

    // Display the front element
    cout << "Front element: " << fl.front() << endl;

    // Check if the forward_list is empty
    if (fl.empty())
        cout << "The forward_list is empty" << endl;
    else
        cout << "The forward_list is not empty" << endl;

    // Clear all elements from the forward_list
    fl.clear();
    cout << "Size of the forward_list after clearing: ";
    int count = 0;
    for (auto val : fl) count++;
    cout << count << endl;

    return 0;
}