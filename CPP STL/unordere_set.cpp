#include<bits/stdc++.h> // Includes all standard libraries

using namespace std;

int main() {
  unordered_set<int> s; // Declare an unordered set of integers

  // Insert integers from 1 to 10 into the unordered set
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  // Display all elements in the unordered set
  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " "; // Dereference iterator to access the element
  }
  cout << endl;

  int n = 2; // Element to search in the unordered set

  // Check if the element '2' is present in the unordered set
  if (s.find(2) != s.end())
    cout << n << " is present in unordered set" << endl;

  // Erase the first element in the unordered set
  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " "; // Display remaining elements
  }
  cout << endl;

  // Display the size of the unordered set
  cout << "The size of the unordered set is: " << s.size() << endl;

  // Check if the unordered set is empty
  if (s.empty() == false)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;

  // Clear all elements from the unordered set
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
}