#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
typedef unsigned long long ull;

ull LCM(ull a, ull b) {
	return a*b/__gcd(a,b);
}
ull LCM3 (ull a,ull b, ull c) {
	return LCM( LCM(a,b), LCM(b,c));
}

int main() {
	int t; cin >>t;
	while (t--) {
		ull x,y,z,n;
		cin>>x>>y>>z>>n;
		ull k= LCM3 (x,y,z);
		if (k>=pow(10,n)) cout<<-1<<endl;
		else {
			ull N= pow(10,n-1);
			cout<< N +(k-N%k)<<endl;	
		}
	}
	return 0;
}
// vi du 2 3 5 4 thi res=1000+(30-10)=1020
