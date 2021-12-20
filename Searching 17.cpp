#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t; cin>>t;
	while (t--) {
		int n,k; cin>>n>>k;
		int a[n+5];
		for (int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		cout<<a[k-1]<<endl;
	}
	return 0;
}
/*
1
6 3
10 5 15 20 40 80
*/
