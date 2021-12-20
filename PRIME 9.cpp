#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int t; cin >>t;
	while (t--) {
		long long n; cin>>n;
		int dem=0;
		while (n%2==0) {
			dem++;	
			n/=2;
		}
		if (dem>0) cout<<2<<" "<<dem<<" ";
		
		for (int i=3; i<=sqrt(n); i+=2) {
			int dem=0;
			while (n%i==0) {
				dem++;
				n=n/i;			
			}
			if (dem>0) cout<<i<<" "<<dem<<" ";
		}
		if (n>1) cout<<n<<" 1";
		cout<< endl;
	}
		return 0;
}

