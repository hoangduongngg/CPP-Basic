#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

bool check (int a[], int n, int x) {	//ktra 1 so co trong mang chua
	for (int i=0; i<n; i++)
		if (a[i]==x) return 1;
	return 0;
	
}

void Sort_chuso (ull a[], int n) {
	int b[20];		//mang luu cac chu so, toi da 10 so
	int k=0;
	int cs;
	for (int i=0; i<n; i++) {
		while (a[i]>0) {
			cs=a[i]%10;
			a[i]/=10;
			
			if (!check(b,k,cs)) {
				b[k]=cs;
				k++;
				if (k==10) break;
			}
		}
		if (k==10) break;
	}
	sort (b, b+k);
	for (int i=0; i<k;i++) cout<<b[i]<<" ";
	cout<<endl;
	
	
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		ull a[n+5];
		for (int i=0; i<n; i++) cin>>a[i];
		Sort_chuso(a,n);
	}
	
	return 0;
}
/*
2
3
131 11 48
4
111 222 333 446
*/
