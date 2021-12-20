#include <iostream>
#include <math.h>
using namespace std;
typedef unsigned long long int ull; 
bool SNT(ull n) {
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return 0;
	return 1;
}
int main() {
	int t; cin>>t;
	while (t--) {
		ull L,R; cin>>L>>R;
		ull dem=0;
		ull i=sqrt(L)+1;		//L>=1 nen i>=2
		if (i==2) dem++;
		if ( i%2==0) i++;
		for (i; i<=sqrt(R); i+=2)		//i>2
			if (SNT(i)) dem++;
		cout<<dem<<endl;
	}
}

// y tuong: so co 3 uoc la binh phuong cua 1 SNT
