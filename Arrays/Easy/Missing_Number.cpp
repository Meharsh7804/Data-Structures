// Find the missing number in an array of size n containing numbers from 1 to n.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n - 1 << " numbers (from 1 to " << n << "): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int count = 1;
    for (int i = 0; i < n; i++){
        if (arr[i] == count){
            count++;
        } else {
            cout << "The missing number is: " << count << endl;
            break;
        }
    }
}