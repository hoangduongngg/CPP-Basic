#include <iostream>
#include <algorithm>
using namespace std;

int First (int a[], int n) {
	sort(a,a+n-1);		// ham sort sap xep tang dan i=0
	for (int i=0; i<n-1; i++)
		if (a[i]!=i+1)
			return i+1;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int a[n+2];
		for (int i=0; i<n-1; i++) cin>>a[i];		// n-1 phan tu
		sort(a,a+n-1);
		cout<<First(a,n)<<endl;
	}
	return 0;
}
/*
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10
*/
