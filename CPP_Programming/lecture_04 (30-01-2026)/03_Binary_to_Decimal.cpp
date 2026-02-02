#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, bass = 1;

    cin >> binary;

    while(binary > 0) {
        int n = binary % 10;
        decimal = decimal + n * bass;
        bass = bass * 2;
        binary = binary / 10;
    }

    cout << decimal;

    return 0;
}
