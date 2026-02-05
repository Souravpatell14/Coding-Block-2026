#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    for (int num = n1; num <= n2; num++) {
        int original = num;
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }
        if (sum == original) {
            cout << original << endl;
        }
    }
    return 0;
}
