#include <iostream>
using namespace std;

int First (int a[], int n, int X) {
	for (int i=1; i<=n; i++)
		if (a[i]==X)
			return i;
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
10 3
5 6 7 8 9 10 1 2 3 4
10 3
1 2 3 4 5 6 7 8 9 10
*/
