#include <iostream>
#include <math.h>
typedef long long ll;
using namespace std;
ll UNT(ll n) {
	if (n%2==0) {
		return 2;	
	}
	for (int i=3; i<=sqrt(n); i+=2)
		if (n%i==0) {
			return i;	
		}
	return n;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		for (int i=1; i<=n; i++) cout<<UNT(i)<<" ";
		cout<< endl;
	}
	return 0;
}
