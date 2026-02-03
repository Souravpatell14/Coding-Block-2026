#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N % 2 == 0) {
        return 0; 
    }
    int mid = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
         
            int dist = abs(i - mid) + abs(j - mid);

            if (dist < mid) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}