// Question;-
//         1  
//       1 1 1  
//     1 1 1 1 1  
//   1 1 1 1 1 1 1  
// 1 1 1 1 1 1 1 1 1

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "1";
        }
        for (int j = 2; j <= i; j++){
            cout<<"1";
        }
        cout << endl;
    }
    return 0;
}
