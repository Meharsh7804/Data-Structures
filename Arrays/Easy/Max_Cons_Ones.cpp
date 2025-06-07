// Find maximum consecutive ones in a binary array.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the binary array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " binary numbers (0 or 1): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxCount = 0, currentCount = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 1){
            currentCount++;
            if (currentCount > maxCount)
                maxCount = currentCount;
        } else {
            currentCount = 0;
        }
    }
    
    cout << "The maximum consecutive ones are: " << maxCount << endl;
    return 0;
}