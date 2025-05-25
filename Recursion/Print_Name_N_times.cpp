// Print you name n times using recursion

#include <iostream>
using namespace std;

void printName(int n, string name){
    if (n > 3) return;
    cout << name << endl; // Print the name
    printName(n + 1, name); // Recursive call with incremented n
}

int main(){
    string name = "Meharsh"; // Replace with your name
    int n = 1; // Start from 1
    printName(n, name);
    return 0;
}