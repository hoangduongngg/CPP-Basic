#include <iostream>
#include <math.h>
using namespace std;

bool SNT(int n) {
	if (n==2) return 1;
	if (n<2 || n%2==0) return 0;
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return 0;
	return 1;
}
bool Sphenic(int n) {
	int count=0;
	if (n%2==0) {
		count++;
		n/=2;
	}
	for (int i=3; i<=n; i+=2) {
		if (n%i==0 && SNT(i)) {
			count++;
			n/=i;
			if (count==3 && n==1) return 1;
			if (count>3) return 0;
		}
	}
	
	return 0;
}
int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		if (Sphenic(n)) cout<<"1";
		else cout<<"0";
		cout<< endl;
	}
	return 0;
}
