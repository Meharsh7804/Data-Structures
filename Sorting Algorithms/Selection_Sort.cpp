// Selection Sort Algorithm in C++

// Algorithm to sort an array using Selection Sort
/*
Step 1> Start with the first element of the array.
Step 2> Assume the first element is the minimum.
Step 3> Compare the assumed minimum with the next element.
Step 4> If the next element is smaller than the assumed minimum, update the minimum.
Step 5> Repeat steps 3-4 for all elements in the array.
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
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
    selectionSort(arr, n);
}