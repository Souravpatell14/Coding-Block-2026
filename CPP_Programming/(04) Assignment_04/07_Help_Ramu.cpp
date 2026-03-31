#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;

        int n, m;
        cin >> n >> m;

        int totalRickshaw = 0;
        int totalCab = 0;

        // Rickshaw cost (no array used)
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            totalRickshaw += min(x * c1, c2);
        }

        totalRickshaw = min(totalRickshaw, c3);

        // Cab cost (no array used)
        for(int i = 0; i < m; i++) {
            int x;
            cin >> x;
            totalCab += min(x * c1, c2);
        }

        totalCab = min(totalCab, c3);

        // Final answer
        int result = min(totalRickshaw + totalCab, c4);

        cout << result << endl;
    }

    return 0;
}