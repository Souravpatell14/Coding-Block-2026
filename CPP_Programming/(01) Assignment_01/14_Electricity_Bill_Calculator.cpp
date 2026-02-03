#include <iostream>
using namespace std;

int main() {
    int units;
    cin >> units;

    int bill;

    if (units <= 100) {
        bill = units * 2;
    } 
    else if (units <= 200) {
        bill = units * 3;
    } 
    else {
        bill = units * 5;
    }

    cout << bill;
    return 0;
}
