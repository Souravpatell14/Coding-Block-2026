#include <iostream>
using namespace std;

// Function to find index
int findIndex(int arr[], int n, int m) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == m) {
            return i;   // mil gaya
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    // Function call
    int result = findIndex(arr, n, m);

    // Output
    cout << result;

    return 0;
}