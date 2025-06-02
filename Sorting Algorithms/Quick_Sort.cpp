// Quick Sort implementation in C++

/*
Step 1> Choose a pivot element from the array.
Step 2> Partition the array into two halves: elements less than the pivot and elements greater than the pivot.
Step 3> Recursively apply the same steps to the two halves.
Step 4> Combine the sorted halves to get the final sorted array.
*/

#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partitioning index
        int pivot = arr[high];
        int i = (low - 1); // Index of smaller element

        for (int j = low; j < high; j++) {
            // If current element is smaller than or equal to pivot
            if (arr[j] <= pivot) {
                i++; // Increment index of smaller element
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]); // Swap the pivot element with the element at i + 1
        int partitionIndex = i + 1;

        // Recursively apply quickSort to the left and right subarrays
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i <= high; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1); 
}