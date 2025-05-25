// Print numbers from n to 1 using recursion

#include <iostream>
using namespace std;

void printNumbers(int n){
    cout << n << endl;
    if(n == 1) return; // Base case: if n is 1, stop recursion
    printNumbers(n - 1); // Recursive call with decremented n
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the value of n
    printNumbers(n); // Call the function to print numbers from n to 1
    return 0;
}