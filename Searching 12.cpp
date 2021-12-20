#include <iostream>
#define MAX 100000
using namespace std;

int Ktra(int a[], int b[], int n, int x) {		// cap Ai-Aj=X co ton tai khong
	for (int i=0; i<n; i++) {
		if (b[a[i]-x]==1) return 1;		// neu a[i]-x co xuat hien tuc la co so thoa man
	}
	return -1;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n,x; cin>>n>>x;
		int a[n+5], b[MAX]={};	//khoi tao b de danh dau cac so da xuat hien
		for (int i=0; i<n; i++) {
			cin>>a[i];
			b[a[i]]=1;		//mang check : danh dau la so a[i] co xuat hien trong mang
		}
		cout<<Ktra(a,b,n,x)<<endl;
	}
	return 0;
}
/*
2
6 78
5 20 3 2 5 80
5 45
90 70 20 80 50
*/
