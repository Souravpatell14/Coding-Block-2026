#include <iostream>
using namespace std;

int main() {
    int sb, db;
    long long sn;
    cin >> sb >> db >> sn;

    long long decimal = 0;
    long long power = 1;

    while (sn > 0) {
        int digit = sn % 10;
        decimal += digit * power;
        power *= sb;
        sn /= 10;
    }
    long long answer = 0;
    long long place = 1;

    while (decimal > 0) {
        int rem = decimal % db;
        answer += rem * place;
        place *= 10;
        decimal /= db;
    }

    cout << answer;
    return 0;
}
