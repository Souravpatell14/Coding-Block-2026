#include <iostream>
#include <algorithm>
using namespace std;

void tripletsSum(int arr[], int n, int target) {
    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Fix one element
    for (int i = 0; i < n - 2; i++) {

        // Duplicate skip for i
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;

        // Step 3: Two pointer
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                cout << arr[i] << ", " << arr[left] << " and " << arr[right] << endl;

                left++;
                right--;

                // Duplicate skip for left
                while (left < right && arr[left] == arr[left - 1]) left++;

                // Duplicate skip for right
                while (left < right && arr[right] == arr[right + 1]) right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    tripletsSum(arr, n, target);

    return 0;
}