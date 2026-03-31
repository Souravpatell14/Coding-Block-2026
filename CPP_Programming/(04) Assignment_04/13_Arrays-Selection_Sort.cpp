#include <iostream>
using namespace std;

// Function for Selection Sort
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {

        int minIndex = i;

        // find smallest element in remaining array
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap smallest with current position
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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
    selectionSort(arr, n);

    // print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}