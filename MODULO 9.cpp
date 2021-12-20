#include <iostream>
using namespace std;
const int P=1e9+7;
typedef unsigned long long int ull;

ull gthua(int n) {
	int gt=1;
	for (int i=2; i<=n; i++) 
		gt=(gt*i)%P;
	return gt;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n, r; cin>>n>>r;
		cout << ((gthua(n) %P) / (2* gthua(n-r) %P)) %P  <<endl;
	}
	return 0;
}
