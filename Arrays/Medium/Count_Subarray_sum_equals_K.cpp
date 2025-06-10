// Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.

#include <vector>
#include <iostream>
using namespace std;

int subarraySum(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                count++;
            }
        }
    }
    cout << "Total number of subarrays with sum equals to " << k << " is: " << count << endl;
    return count;
    
}

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
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    subarraySum(arr, n, k);
    return 0;
}