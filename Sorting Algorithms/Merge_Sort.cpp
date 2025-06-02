// Merge Sort Algorithm in C++

/*
Step 1> Divide the array into two halves.
Step 2> Recursively sort each half.
Step 3> Merge the two sorted halves back together.
Step 4> Repeat until the entire array is sorted.
*/

#include <iostream>
using namespace std;

void mergeSort(int arr[]){
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Base case: if the array has one or no elements, it's already sorted
    if (n < 2) return;

    int mid = n / 2;
    int left[mid], right[n - mid];

    // Fill the left and right subarrays
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }

    // Recursively sort both halves
    mergeSort(left);
    mergeSort(right);

    // Merge the sorted halves
    int i = 0, j = 0, k = 0;
    while (i < mid && j < n - mid) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    
    // Copy any remaining elements from the left half
    while (i < mid) {
        arr[k++] = left[i++];
    }
    
    // Copy any remaining elements from the right half
    while (j < n - mid) {
        arr[k++] = right[j++];
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    mergeSort(arr);
    return 0;
}