#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int Tong_chu_so (int n) {
	int s=0;	//tong cac chu so
	while (n>0) {
		s+=n%10;
		n/=10;
	}
	return s;
}

int Rut_gon (int n) {
	int res=Tong_chu_so(n);
	while (res>9)
		res=Tong_chu_so(res);
	return res;
}
int main() {
	int t; cin>>t;
	while (t--) {
		ll n; cin>>n;
		cout<<Rut_gon(n)<<endl;
	}
	return 0;
}
/* Rut gon 1 so = tong cac chu so cho den khi chi con lai 1 chu so
3
1009
167
102

1
5
3
