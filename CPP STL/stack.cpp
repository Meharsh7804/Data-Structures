#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
    stack<int> st; // Declare a stack of integers

    // Push elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);

    // Display the top element
    cout << "The top element of the stack is: " << st.top() << endl;

    // Pop the top element
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;

    // Display the size of the stack
    cout << "The size of the stack is: " << st.size() << endl;

    // Check if the stack is empty
    if (st.empty())
        cout << "The stack is empty" << endl;
    else
        cout << "The stack is not empty" << endl;

    // Pop all elements
    while (!st.empty()) {
        st.pop();
    }
    cout << "Size of the stack after clearing: " << st.size() << endl;

    return 0;
}