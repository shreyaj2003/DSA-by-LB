#include <iostream>
using namespace std;

int main() {
    // to print sum of prime numbers till n.
    int n;
    cout << "Write the value of n: " << endl;
    cin >> n;
    int i = 2, sum = 0;
    while (i <= n) 
    {
        if ((i % 2) == 0) 
        {
            sum = sum + i;
        }
        i += 2; 
    }
    cout << "sum of even numbers from 1 to n is " << sum << endl;
}
