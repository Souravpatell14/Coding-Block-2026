#include <iostream>
using namespace std;

// Function for Insertion Sort
void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];   // current element
        int j = i - 1;

        // shift elements greater than key
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // place key at correct position
        arr[j + 1] = key;
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
    insertionSort(arr, n);

    // print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}