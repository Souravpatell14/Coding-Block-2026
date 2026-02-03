#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;          

    int mid = N / 2;

    for (int i=0; i<N; i++) {

        int spaces = abs(mid-i);
        int stars  =N-2*spaces;

        for (int s=0; s<spaces; s++)
            cout<<"\t";

        for (int k=0; k<stars; k++)
            cout<<"*\t";

        cout<<endl;
    }
    return 0;
}
