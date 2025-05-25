// Print natural numbers from 1 to n using recursion

#include <iostream>
using namespace std;

void printNumbers(int n, int current){
    if(current > n)
        return;
    cout << current << endl; // Print the current number
    current += 1; // Increment current number
    printNumbers(n,current); // Recursive call with decremented n
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input the value of n
    printNumbers(n,1); // Call the function to print numbers
    return 0;
}