#include <iostream>
using namespace std;

int main() {
    // 0 1 1 2 3 5 8 13 21 34 55 89
    int n = 10;

    int a = 0;
    int b = 1;
    cout <<"0"<<" "<<"1"<<" ";
    for (int i = 1; i<=n; i++) {
        int nextNumber = a+b;
        cout << nextNumber <<" ";

        a = b;
        b = nextNumber;
    }

}