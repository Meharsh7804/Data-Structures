// Find the majority element in an array.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(int arr[], int n) {
    unordered_map<int, int> countMap;
    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
        if (countMap[arr[i]] > n / 2) {
            cout << "The majority element is: " << arr[i] << endl;
            return arr[i];
        }
    }
    cout << "No majority element found." << endl;
    return -1; // Indicating no majority element
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    majorityElement(arr, n);
    return 0;
}