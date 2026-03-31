#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];

    // input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // reverse logic (direct main me)
    int start = 0;
    int end = n - 1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // print reversed array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}