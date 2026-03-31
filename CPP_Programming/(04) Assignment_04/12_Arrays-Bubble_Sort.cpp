#include <iostream>
using namespace std;

// Function for Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[1000];

    // input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // function call
    bubbleSort(arr, n);

    // print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}