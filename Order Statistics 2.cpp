#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin >>n;
		int a[n+5];
		int i;
		for(int i=0; i<n; i++)
			cin>>a[i];
			
		sort(a,a+n);	
		cout<<a[n-1]<<endl;
	}	
	return 0;
}
/*
2

6

7  10  4  3  20  15

6
9  7  12  8  6  5
*/
