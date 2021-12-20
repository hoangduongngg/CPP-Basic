#include<iostream>
using namespace std;
const long r=1e9+7;

int fibo(int n){
    if(n<2) return n;
    int f0=0,f1=1,f;
    for (int i=2; i<=n; i++){
        f=(f0+f1)%r;
        f0=f1;
        f1=f;
    }
    return f;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fibo(n) << endl;
    }
}
