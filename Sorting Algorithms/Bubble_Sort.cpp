// Bubble Sort Algorithm in C++

// Algorithm to sort an array using Bubble Sort
/*
Step 1> Start with the first element of the array.
Step 2> Compare the current element with the next element.
Step 3> If the current element is greater than the next element, swap them.
Step 4> Move to the next element and repeat steps 2-3 until the end of the array is reached.
*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1;j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
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
    bubbleSort(arr, n);
}
