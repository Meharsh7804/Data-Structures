// Union of Sorted Arrays

#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    cout << "Enter the number of elements in the second array: ";
    cin >> m;

    if (n <= 0 || m <= 0) {
        cout << "Array sizes must be greater than 0." << endl;
        return 1;
    }
    int arr1[n], arr2[m];
    cout << "Enter " << n << " elements for the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter " << m << " elements for the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    int i = 0, j = 0;
    cout << "Union of the two sorted arrays: ";
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        } else if (arr1[i] > arr2[j]) {
            cout << arr2[j] << " ";
            j++;
        } else {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}