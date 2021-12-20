#include <iostream>
using namespace std;

int First (int a[], int n, int X) {
	for (int i=1; i<=n; i++)
		if (a[i]==X)
			return 1;
	return -1;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n, X; cin>>n>>X;
		int a[n+2];
		for (int i=1; i<=n; i++) cin>>a[i];
		
		cout<<First(a,n,X)<<endl;
	}
	return 0;
}
/*
2 
5  16
9  7  2  16  4
7  98
1  22  57  47  34  18  66
*/
