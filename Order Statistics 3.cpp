#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >>t;
	while (t--) {
		int n,k; cin >>n>>k;
		int a[n][n], b[n*n];
		int l=0;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++) {
				cin>>a[i][j];
				b[l]=a[i][j];
				l++;
			}
		sort(b,b+l);
		cout<<b[k-1]<<endl;
		
	}	
	return 0;
}
/*
1
4  7
10  20  30  40
15  25  35  45
24  29  37  48
32  33  39  50
*/
