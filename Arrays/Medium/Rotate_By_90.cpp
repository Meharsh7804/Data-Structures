// Rotate a square matrix by 90 degrees clockwise in place.

#include <iostream>
#include <vector>
using namespace std;

void rotate90(vector<vector<int>>& arr, int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    // Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(arr[i][j], arr[i][n - 1 - j]);
        }
    }
}

int main(){
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

    cout << "Original matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rotate90(arr, n);

    cout << "Matrix after 90-degree clockwise rotation:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}