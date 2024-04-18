#include <iostream>
using namespace std;

int main() {
    int a, b;
    if(cin >> a) {
        if(cin >> b) {
            cout << "There are exactly 2 integers: " << a << " and " << b << " read by scanf() function." << endl;
            cout << "(1) The sum of " << a << " (addend) and " << b << " (addend) is " << a + b << ".\n";
            cout << "(2) The difference of " << a << " (minuend) and " << b << " (subtrahend) is " << a - b << ".\n";
            cout << "(3) The product of " << a << " (multiplicand) and " << b << " (multiplier) is " << a * b << ".\n";
            cout << "(4) The quotient of " << a << " (dividend) and " << b << " (divisor) is " << a / b << ".\n";
            cout << "(5) The remainder of " << a << " (dividend) and " << b << " (divisor) is " << a % b << ".\n";
        } else {
            cout << "There is only one integer with value " << a << " read by scanf() function." << endl;
        }
    } else {
        cout << "The return value of scanf() function is -1 which indicates no integer found." << endl;
    }

    return 0;
}
