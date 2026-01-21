#include <iostream>
using namespace std;

int main() {
    int a=10, b=25, c=15;

    if(a >= b && a >= c)
        cout<<a;
    else if(b >= a && b >= c)
        cout<<b;
    else
        cout<<c;
    return 0;
}
