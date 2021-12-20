#include <iostream>
using namespace std;
bool SNT(int n) {
	if (n==2) return 1;
	if (n<2 || n%2==0) return 0;
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return 0;
	return 1;
}

int Run(int n) {		//tra ve so dau tien: tach thanh 2 so nguyen to 
/*
	if (n==4 || n==5) return 2;
	if (n<4) return -1;
	for (int i=3; i<=n/2; i+=2)
		if (SNT(i) && SNT(n-i)) return i;
	return -1;
*/
	for (int i=2; i<n; i++)
		if (SNT(i) && SNT(n-i)) return i;
	return -1;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		if (Run(n)==-1) cout<<-1<<endl;
		else cout<<Run(n)<<" "<<n-Run(n)<<endl;
	}
	return 0;
}
/*
2
4
8
*/

