#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    deque<int> dq; // Declare a deque of integers

    // Push elements at the back and front
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    // Display all elements in the deque
    cout << "Elements in the deque: ";
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display the front and back elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Pop elements from front and back
    dq.pop_front();
    dq.pop_back();
    cout << "Elements after pop_front and pop_back: ";
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Insert element at position 1
    dq.insert(dq.begin() + 1, 15);
    cout << "Elements after inserting 15 at position 1: ";
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display the size of the deque
    cout << "The size of the deque is: " << dq.size() << endl;

    // Check if the deque is empty
    if (dq.empty())
        cout << "The deque is empty" << endl;
    else
        cout << "The deque is not empty" << endl;

    // Clear all elements from the deque
    dq.clear();
    cout << "Size of the deque after clearing: " << dq.size() << endl;

    return 0;
}