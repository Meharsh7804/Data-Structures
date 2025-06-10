// Print the array in spiral form.

#include <iostream>
#include <vector>
using namespace std;

void printSpiral(const vector<vector<int>>& arr, int n) {
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Print the top row
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Print the right column
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            // Print the bottom row
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            // Print the left column
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Matrix size must be greater than 0." << endl;
        return 1;
    }

    vector<vector<int>> arr(n, vector<int>(n));
    cout << "Enter " << n * n << " elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Spiral order of the matrix:" << endl;
    printSpiral(arr, n);
    cout << endl;

    return 0;
}