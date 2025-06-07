// Find the longest subarray with a given sum

#include <iostream>
#include <vector>
using namespace std;

int find_max_length_subarray(int arr[], int n, int target_sum) {
    int max_length = 0;
    int current_sum = 0;
    vector<int> prefix_sum(n + 1, 0);
    prefix_sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            current_sum = prefix_sum[j] - prefix_sum[i];
            if (current_sum == target_sum) {
                max_length = max(max_length, j - i);
            }
        }
    }
    if (max_length > 0) {
        cout << "The length of the longest subarray with sum " << target_sum << " is: " << max_length << endl;
    } else {
        cout << "No subarray with the given sum found." << endl;
    }
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

    int target_sum;
    cout << "Enter the target sum: ";
    cin >> target_sum;

    find_max_length_subarray(arr, n, target_sum);
    return 0;
}