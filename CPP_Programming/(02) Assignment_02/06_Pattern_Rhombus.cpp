#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int t = 1; t <= N - i; t++)
            cout << "\t";

        for (int num = i; num <= i + i - 1; num++)
            cout << num << "\t";

        for (int num=i+i-2; num>=i; num--)
            cout<<num<<"\t";

        cout<<endl;
    }
    for (int i=N-1; i>=1; i--) {

        for (int t=1; t<=N-i; t++)
            cout<<"\t";

        for (int num=i; num<=i+i-1; num++)
            cout<<num<<"\t";

        for (int num=i+i-2; num>=i; num--)
            cout<<num<<"\t";
        cout<<endl;
    }
    return 0;
}
