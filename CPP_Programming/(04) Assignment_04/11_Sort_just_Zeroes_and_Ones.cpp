#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count0 = 0;

    // input + count 0
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 0) {
            count0++;
        }
    }

    // print 0
    for(int i = 0; i < count0; i++) {
        cout << 0 << " ";
    }

    // print 1
    for(int i = count0; i < n; i++) {
        cout << 1 << " ";
    }

    return 0;
}