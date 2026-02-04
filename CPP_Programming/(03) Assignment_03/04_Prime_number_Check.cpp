#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N <= 1) {
        cout << "Not Prime";
        return 0;
    }

    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            cout << "Not Prime";
            return 0;
        }
    }

    cout << "Prime";
    return 0;
}
