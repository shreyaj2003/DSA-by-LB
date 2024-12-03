#include <iostream>
using namespace std;

int main() {
    // to print the value of character if it is upper case , lower case or special character.
    char ch;
    cin >> ch;
    int a = ch;
    if (a >= 65 && a <=90) {
        cout << "Upper case";
    } 
    else if (a>=97 && a <= 122) {
        cout << "Lower case";
    } 
    else if (a >= 48 && a <= 57) {
        cout << "numbers";
    } 
    else {
        cout << "Special characters";
    }
    return 0 ;
}