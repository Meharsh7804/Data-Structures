#include<bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
  vector<int> v; // Declare a vector of integers

  // Insert integers from 0 to 9 into the vector
  for (int i = 0; i < 10; i++) {
    v.push_back(i); // Push elements to the back of the vector
  }

  // Display all elements in the vector
  cout << "The elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " "; // Dereference iterator to access the element

  // Display the first and last elements of the vector
  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();

  // Display the size of the vector
  cout << "\nThe size of the vector: " << v.size();

  // Remove the last element from the vector
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back(); // Removes the last element

  // Display the vector after removing the last element
  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  // Insert an element at the beginning of the vector
  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5); // Insert 5 at the beginning
  cout << "The first element is: " << v[0] << endl;

  // Erase the first element of the vector
  cout << "Erasing the first element" << endl;
  v.erase(v.begin()); // Remove the first element
  cout << "Now the first element is: " << v[0] << endl;

  // Check if the vector is empty
  if (v.empty())
    cout << "\nVector is empty";
  else
    cout << "\nVector is not empty" << endl;

  // Clear all elements from the vector
  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();
}