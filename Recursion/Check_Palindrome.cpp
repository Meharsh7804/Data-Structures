// Check if a given string is Palindrome using recursion

#include <iostream>
using namespace std;

bool isPalindrome(string str, int start, int end){
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    else   
        return isPalindrome(str, start + 1, end - 1);
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int start = 0;
    int end = str.length() - 1;

    if(isPalindrome(str, start, end)){
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}