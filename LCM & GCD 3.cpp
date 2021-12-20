#include <iostream>
#include <math.h>
#define MAX 100
using namespace std;
typedef unsigned long long ull;
const int mod=1e9+7;

ull GCD (int a, int b) {
	if (!a) return b;
	return GCD (b%a, a);
}

ull H(int a[MAX], int n) {
	ull h=1;
	for (int i=0; i<n; i++)
		h=(h*a[i])%mod;
	return h;
}

ull G(int a[MAX], int n) {
	ull g = a[0];
	for (int i=1; i<n; i++)
		g= GCD( g,a[i]) %mod;
	return g;
}

ull POW_HG (int a[MAX], int n) {
	ull res=1;
	for (ull i=0; i<G(a,n); i++)
		res=(res*H(a,n)) %mod;
		
	return res;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		int a[MAX];
		for (int i=0; i<n; i++) cin >> a[i];
		
		cout<<POW_HG(a,n)<<endl;
	}
	return 0;
}
