#include <iostream>
using namespace std;
typedef unsigned long long int ull;
int main() {
	int t; cin >>t;
	while (t--) {
		ull x,y,p; cin>>x>>y>>p;
		x=x%p; y=y%p;
		ull S= 1;
		for (ull i=1; i<=y; i++)
			S=(S*x)%p;
		
		cout<<S<<endl;
	}
	return 0;
}
