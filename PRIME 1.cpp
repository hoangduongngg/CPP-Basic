#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int t; cin >>t;
	while (t--) {
		long long n; cin>>n;		//n>=2
		while (n%2==0) {
			cout<<"2 ";		
			n/=2;
		}
		for (int i=3; i<=sqrt(n); i+=2)
			while (n%i==0) {
				cout <<i<<" ";		
				n=n/i;			
			}
		if (n>1) cout<<n;
		cout<< endl;
	}
		return 0;
}

// y tuong: dua ra cac uoc SNT = phan tich cac thua so -> khong quan tam den SNT
