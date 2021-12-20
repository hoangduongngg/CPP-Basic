#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t; cin>>t;
	while (t--) {
		int k,n; cin>>k>>n;
		int a[k+5][n+5], b[n*k+5];
		int l=0;
		
		for (int i=0; i<k;i++)
			for (int j=0; j<n; j++) {
				cin>> a[i][j];
				b[l]=a[i][j];
				l++;
			}
		
		sort(b, b+n*k);
		for (int i=0; i<l; i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}
/*
1
3 4

1 3 5 7

2 4 6 8

0 9 10 11
*/
