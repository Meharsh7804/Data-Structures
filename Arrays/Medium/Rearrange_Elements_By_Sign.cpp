// Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

#include <iostream>
#include <vector>
using namespace std;

void rearrange(vector<int>& arr, int n) {
    vector<int> pos, neg;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    vector<int> result;
    int i = 0, j = 0;

    // Alternate positive and negative
    while (i < pos.size() && j < neg.size()) {
        result.push_back(pos[i++]);
        result.push_back(neg[j++]);
    }

    // Add remaining positives
    while (i < pos.size()) result.push_back(pos[i++]);

    // Add remaining negatives
    while (j < neg.size()) result.push_back(neg[j++]);

    // Copy result back to original array
    arr = result;
    
    cout << "Rearranged array: ";
    for (int x : arr) {
        cout << x << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rearrange(arr, n);
    return 0;
}
