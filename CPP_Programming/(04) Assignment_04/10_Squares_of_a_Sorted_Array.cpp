#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[10000];

    // input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // square each element
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i] * arr[i];
    }

    // sort the array
    sort(arr, arr + n);

    // print result
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}