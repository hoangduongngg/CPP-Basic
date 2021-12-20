#include <iostream>
using namespace std;
typedef unsigned long long int ull;

void Ktra(ull n, ull k) {
	ull s=0;
	for (int i=1; i<=n; i++)
		s+=i%k;
	if (s==k) cout<<1<<endl;
	else cout <<0<<endl;
}
int main() {
	int t; cin >>t;
	while (t--) {
		ull n,k; cin>>n>>k;
		Ktra(n,k);
	}	
	return 0;
}
