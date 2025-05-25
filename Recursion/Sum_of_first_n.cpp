// Sum of first n naturl numbers using recursion

#include <iostream>
using namespace std;

int sumOf(int n){
    if (n == 0){
        return 0;
    }
    else{
        return n + sumOf(n - 1);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the value of n
    int sum = sumOf(n); // Call the function to calculate sum
    cout << "Sum = " << sum << endl;
    return 0;
} 