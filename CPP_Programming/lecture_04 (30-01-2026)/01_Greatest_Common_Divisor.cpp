#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    
    while(b!=0){
        int rev=a%b;
        a=b;
        b=rev;
    }
    cout<<a;

    return 0;
}