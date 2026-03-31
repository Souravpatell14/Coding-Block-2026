#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], inv[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        inv[arr[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        cout << inv[i] << " ";
    }

    return 0;
}