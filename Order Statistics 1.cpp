#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >>t;
	while (t--) {
		int n,k; cin >>n>>k;
		int a[n+5];
		int i;
		for(int i=0; i<n; i++)
			cin>>a[i];
			
		sort(a,a+n);	
		cout<<a[k-1]<<endl;
	}	
	return 0;
}
/*
2
6  3
7  10  4  3  20  15
6  4
9  7  12  8  6  5
*/
