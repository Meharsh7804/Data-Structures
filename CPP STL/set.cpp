#include<bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
  set < int > s; // Declare a set of integers

  // Insert integers from 1 to 10 into the set
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  // Display all elements in the set
  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " "; // Dereference iterator to access the element
  }
  cout << endl;

  int n = 2; // Element to search in the set

  // Check if the element '2' is present in the set
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  // Erase the first element in the set
  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " "; // Display remaining elements
  }
  cout << endl;

  // Display the size of the set
  cout << "The size of the set is: " << s.size() << endl;

  // Check if the set is empty
  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;

  // Clear all elements from the set
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}