#include <iostream>
using namespace std;
int main() {
    // D
    // C D 
    // B C D 
    // A B C D
    int n;
    cin >> n;
    int i =1;
    while (i<=n) {
        int j = 1;
        while (j <= i) {
            char v = 'D' - i + j;
            cout << v <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
}