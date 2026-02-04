#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long x = a, y = b;

    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }
    cout << (a / x) * b;
    return 0;
}
