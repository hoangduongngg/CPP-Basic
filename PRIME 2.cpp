#include <iostream>
using namespace std;
typedef unsigned long long int ull;
int main() {
	int t; cin >>t;
	while (t--) {
		ull n; cin>>n;		// n>1
		ull max;
		while (n%2==0)	{
			n/=2;
			max=2;
		}
		for (ull i=3; i*i<=n; i+=2)
			while (n%i==0) {
				n=n/i;
				max=i;
			}
						
		if (n>2) max=n;
		cout<< max<<endl;
	}
	return 0;
}
