// Reverse an array using recursion

#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    if(start >= end){
        return;
    }

    swap(arr[start], arr[end]);
    reverseArray(arr, start+1, end-1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, 0, size - 1);

    cout << "Reversed array: ";
    printArray(arr, size);

    return 0;
}