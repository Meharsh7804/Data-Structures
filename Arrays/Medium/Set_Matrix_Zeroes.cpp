// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<bool> row(n, false), col(m, false);

    // First pass to find all zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    // Second pass to set rows and columns to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                arr[i][j] = 0;
            }
        }
    }

    cout << "Matrix after setting rows and columns to zero:" << endl;
    for (const auto& r : arr) {
        for (const auto& val : r) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}