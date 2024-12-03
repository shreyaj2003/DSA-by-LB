#include <iostream>
using namespace std;

int main () {
    // to print if a nujmber is prime or not 
    int n;
    cin >> n;
    int i = 2;
    while (i <n ) {
        if (n % i == 0) {
            cout << "Not prime" << endl;
            break;
        }
        else {
            cout << "prime" << endl;
            break;
        }
        i++;
    }
}