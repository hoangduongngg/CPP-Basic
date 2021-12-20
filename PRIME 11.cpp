#include <iostream>
#include <math.h>
typedef unsigned long long int ull;
using namespace std;

void SHH(ull n) {
	ull s=0;
	for (ull i=1; i<n; i++) {
		if (n%i==0) s+=i;
	}
	if (s==n) cout<<1;
	else cout<<0;
	cout<< endl;
}

int main() {
	int t; cin >>t;
	while (t--) {
		ull n; cin>>n;
		SHH(n);
		
	}
	return 0;
}
