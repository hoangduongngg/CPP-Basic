#include <iostream>
using namespace std;

int So_lan_xuat_hien(int a[], int n, int x) {		//so lan xuat hien phan tu x
	for (int i=0; i<n; i++)
		if (a[i]==x) {
			int dem=0;
			while (a[i]==x) {
				dem++;
				i++;
			}
			return dem;
		}
	return -1;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n,x; cin>>n>>x;
		int a[n+2];
		for (int i=0; i<n; i++) cin>>a[i];
		
		cout<<So_lan_xuat_hien(a,n,x)<<endl;
	}
	return 0;
}
/*
2
7 2

1 1 2 2 2 2 3

7 4

1 1 2 2 2 2 3
*/
