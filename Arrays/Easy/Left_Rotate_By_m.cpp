// Left Rotate an array by m positions

#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> m;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Normalize m to avoid unnecessary rotations
    m = m % n;

    // Left rotate the array by m positions
    for (int i = 0; i < m; i++) {
        int firstElement = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = firstElement;
    }

    cout << "Array after left rotation by " << m << " positions: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}