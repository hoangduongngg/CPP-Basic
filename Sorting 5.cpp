#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;

void Union (int a[], int n, int b[], int m, int check[]) {		//mang hop
	int c[n+m+5];
	for (int i=0; i<n; i++) c[i]=a[i];		//cho cac phan tu mang a vao mang hop
	int k=n;
	for (int i=0; i<m; i++) {
		if (!check[b[i]]) {		// neu khac nhau thi cho vao mang hop
			c[k]=b[i];
			k++;
		}
	}
	sort(c,c+k);
	for (int i=0; i<k; i++) cout <<c[i]<<" ";
	cout<<endl;
}

void Intersection (int a[], int n, int b[], int m, int check[]) {		//mang giao
	sort (a,a+n);
	sort (b,b+m);
	for (int i=0; i<m; i++)
		if (check[b[i]]) cout<<b[i]<<" ";		//neu giong nhau thi in ra
	cout<<endl;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n,m;
		cin>>n>>m;
		int a[n+5], b[m+5], check[MAX]={};
		for (int i=0; i<n; i++) {
			cin>>a[i];
			check[a[i]]=1;		//danh dau cac phan tu da xuat hien
		}
		for (int i=0; i<m; i++) cin>>b[i];
		
		Union (a,n,b,m,check);
		Intersection(a,n,b,m,check);
	}
	return 0;
}

/*
1
6 5
7  1  5  2  3  6
3  8  6  20  7
*/
