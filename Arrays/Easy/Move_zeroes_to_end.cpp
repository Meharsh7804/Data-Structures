// Move zeroes to end of an array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int numberOfZeroes = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] != 0)
            cout << arr[i] << " ";
        else
            numberOfZeroes++;
    }
    while (numberOfZeroes--){
        cout << "0 ";
    }
}