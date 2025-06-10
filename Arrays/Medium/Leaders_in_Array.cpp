// print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.

#include <iostream>
using namespace std;

void findLeaders(int arr[], int n) {
    for (int i = 0; i < n; i++){
        if (i == n - 1) // Last element is always a leader
            cout << arr[i] << " ";
        else {
            bool isLeader = true;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] <= arr[j]) {
                    isLeader = false; // Found a greater or equal element on the right
                    break;
                }
            }
            if (isLeader) {
                cout << arr[i] << " "; // Print the leader
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findLeaders(arr, n);
    return 0;
}