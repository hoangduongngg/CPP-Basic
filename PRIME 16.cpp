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
		ull N; cin>>N;
		ull dem=0;
		if (N>=4) dem++;
		for (ull i=3; i*i<=N; i+=2)
			if (SNT(i)) dem++;
		cout<<dem<<endl;
	}
}

// y tuong: so co 3 uoc la binh phuong cua 1 SNT
