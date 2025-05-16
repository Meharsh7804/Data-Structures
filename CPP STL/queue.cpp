#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    queue<int> q; // Declare a queue of integers

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Display the front element
    cout << "The front element of the queue is: " << q.front() << endl;

    // Display the back element
    cout << "The back element of the queue is: " << q.back() << endl;

    // Pop the front element
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;

    // Display the size of the queue
    cout << "The size of the queue is: " << q.size() << endl;

    // Check if the queue is empty
    if (q.empty())
        cout << "The queue is empty" << endl;
    else
        cout << "The queue is not empty" << endl;

    // Pop all elements
    while (!q.empty()) {
        q.pop();
    }
    cout << "Size of the queue after clearing: " << q.size() << endl;

    return 0;
}