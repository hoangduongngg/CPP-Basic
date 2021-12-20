#include <iostream>
#include <math.h>
using namespace std;

int TCS(int n) {
	int tcs=0;
	while (n>0) {
		tcs+=n%10;
		n/=10;
	}
	return tcs;
}

bool Smith(int n) {
	int s=0;		// tong cac uoc nguyen to
	while (n%2==0) {
		s+=2;
	}
	for (int i=3; i<=sqrt(n); i+=2)
		while (n%i==0) {
			s+=i;	
		}
	if (n>1) {
		s+=n;
	}
	if (s==TCS(n)) return 1;
	return 0;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		if (Smith(n)) cout<<"YES";
		else cout<<"NO";
		cout<< endl;
	}
	return 0;
}
