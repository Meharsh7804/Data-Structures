// Insertion Sort Algorithm in C++

// Algorithm to sort an array using Insertion Sort
/*
Step 1> Start with the second element of the array.
Step 2> Compare the current element with the previous elements.
Step 3> If the current element is smaller than the previous element, shift the previous element to the right.
Step 4> Repeat step 3 until the correct position for the current element is found.
Step 5> Insert the current element at its correct position.
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int sortedElement = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > sortedElement){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = sortedElement;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
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
    insertionSort(arr, n);
}