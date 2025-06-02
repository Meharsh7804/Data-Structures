// Shell Sort implementation in C++

/*
Step 1> Start with a large gap and reduce it gradually.
Step 2> For each gap, perform a gapped insertion sort.
Step 3> Repeat until the gap is reduced to 1.
*/

#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
    // Start with a large gap and reduce it
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Perform gapped insertion sort
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            // Shift elements of arr[0..i-gap] that are greater than temp
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
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

    shellSort(arr, n);
}