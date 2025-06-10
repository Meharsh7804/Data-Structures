// Find Maximum Subarray Sum using Kadane's Algorithm

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArraySum(const vector<int>& arr, int n) {
    int maxi = INT_MIN; // Initialize to the smallest integer
    int currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += arr[i]; // Add current element to the current sum
        if (currentSum > maxi) {
            maxi = currentSum; // Update maximum if current sum is greater
        }
        if (currentSum < 0) {
            currentSum = 0; // Reset current sum if it becomes negative
        }
    }
    return maxi; // Return the maximum subarray sum found
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = maxSubArraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}