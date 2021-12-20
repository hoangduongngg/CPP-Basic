#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
const int mod=1e9+7;

void GCD(ull a, ull x, ull y) {
	ull k= __gcd(x,y);		//so lan lap cua a la gcd cua x va y
	for (ull i=0; i<k; i++)
		cout<<a;	
}

int main() {
	int t; cin >>t;
	while (t--) {
		ull a,x,y;
		cin>>a>>x>>y;
		GCD(a,x,y);
		cout<<endl;
	}
	return 0;
}
