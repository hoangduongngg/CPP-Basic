#include <iostream>
using namespace std;


long long GCD (long long a, long long b) {
	if (!a) return b;
	return GCD (b%a, a);
}

long long LCM (long long a, long long b) {
	return a*b/GCD(a,b);
}



int main() {
	int t; cin>>t;
	while (t--) {
		long long m, n, a, b;
		cin>>m>>n>>a>>b;
		
		//if (n/a==m/a==n/b==m/b>0)
		long long dem = n/a-m/a + n/b-m/b - (n/LCM(a,b)- m/LCM(a,b));	// thua cac so chia het cho a va b
		cout << dem<<endl;
		}
}
