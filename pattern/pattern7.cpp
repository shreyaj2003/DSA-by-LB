#include <iostream>
using namespace std;
int main() {
    // A B C D
    // B C D E
    // C D E F
    int n;
    cin >> n;
    int i = 1;
    while (i <=n) {
        int j = 1;
        while (j <= n) {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}