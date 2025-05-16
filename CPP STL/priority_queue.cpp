#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    // Max-heap priority queue (default)
    priority_queue<int> pq;

    // Push elements into the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // Display the top element
    cout << "The top element of the max-heap priority queue is: " << pq.top() << endl;

    // Pop the top element
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl;

    // Display the size of the priority queue
    cout << "The size of the priority queue is: " << pq.size() << endl;

    // Check if the priority queue is empty
    if (pq.empty())
        cout << "The priority queue is empty" << endl;
    else
        cout << "The priority queue is not empty" << endl;

    // Pop all elements
    while (!pq.empty()) {
        pq.pop();
    }
    cout << "Size of the priority queue after clearing: " << pq.size() << endl;

    // Min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(30);
    min_pq.push(20);
    min_pq.push(5);

    cout << "The top element of the min-heap priority queue is: " << min_pq.top() << endl;

    return 0;
}