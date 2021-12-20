#include <iostream>
using namespace std;

long long GCD (long long a, long long b) {
	if (!a) return b;
	return GCD (b%a, a);
}

int main() {
	int t; cin >>t;
	while (t--) {
		unsigned long long a,b; cin>>a>>b;
		unsigned long long UCLN;
		cout << GCD(a,b)<<endl;	
	}
	return 0;
}
