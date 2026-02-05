#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        int digit = x[i] - '0';
        int inverted = 9 - digit;

        if (i == 0 && inverted == 0) {
            continue;
        }
        if (inverted < digit) {
            x[i] = inverted + '0';
        }
    }
    cout << x;
    return 0;
}
