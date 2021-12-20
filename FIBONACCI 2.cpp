#include<iostream>
using namespace std;
typedef long long int ll;

bool KtraFib (ll n) {		//kiem tra n co phai so fibonaci
    if(n<2) return 1;
    ll f0=0,f1=1,f=1;
    while (f<n ){
        f=f0+f1;
        f0=f1;
        f1=f;
		}
	if (f==n) return 1;
	return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if (KtraFib(n)) cout << "YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
