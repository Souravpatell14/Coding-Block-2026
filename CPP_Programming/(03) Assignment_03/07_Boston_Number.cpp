#include <iostream>
using namespace std;

int digitSum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long n;
    cin >> n;

    long long original = n;

    int sumNumber = digitSum(n);
    int sumFactors = 0;

    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            sumFactors += digitSum(i);
            n /= i;
        }
    }

    if (n > 1) {
        sumFactors += digitSum(n);
    }

    if (original > 1 && sumNumber == sumFactors) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}
