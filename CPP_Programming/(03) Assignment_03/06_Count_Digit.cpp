#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int count = 0;
    if (a == 0 && b == 0) {
        cout << 1;
        return 0;
    }
    while (a > 0) {
        int digit = a % 10;   
        if (digit == b) {
            count++;        
        }
        a = a / 10;        
    }
    cout << count;          
}
