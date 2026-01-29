#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<=n-1;i++){
        for(int k=0; k<=n-i-2; k++){
        cout<<"  ";}
        for(int j=i+1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        for(int k=0; k<=n-i-2; k++){
        cout<<"  ";}
        for(int j=i+1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}