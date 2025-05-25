// Printing numbers from 0-3 using recursion

#include <iostream>
using namespace std;

void print(int i){
    if(i > 3) return; // Base case: stop when i exceeds 3
    cout << i << endl; // Print the current value of i
    print(i + 1); // Recursive call with incremented value of i
}

int main(){
    int i = 0;
    print(i);
}