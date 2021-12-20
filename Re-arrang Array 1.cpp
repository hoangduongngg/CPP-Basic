#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >>t;
	while (t--) {
		ll n; cin >> n;
		ll a[n+5], b[n+5];
		
		for (ll i=0; i<n; i++)
			b[i]=-1;
		for (ll i=0; i<n; i++) {
			cin>>a[i];
			if (a[i]>=0 && a[i]<=n) b[a[i]]=a[i];
		}
		for (ll i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}
/*
2

10

-1 -1 6 1 9 3 2 -1 4 -1

6
0  -3  1  -2  3 - 4
*/
