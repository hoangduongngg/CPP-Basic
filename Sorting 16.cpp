#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

void Sort_lan_xuat_hien (int a[], int n) {
	int b[MAX]={};
	for (int i=0; i<n; i++)
		if (b[a[i]]>=1) b[a[i]]++;
		else b[a[i]]=1;
	
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if ( (b[a[i]]<b[a[j]]) || (b[a[i]]==b[a[j]] && a[i]>a[j]))
				swap (a[i], a[j]);
	
	for (int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		int a[n+5];
		for (int i=0; i<n; i++)
			cin>>a[i];
		
		Sort_lan_xuat_hien (a,n);
	}
	
	return 0;
}

/*
2
5
5 5 4 6 4
5
9 9 9 2 5
*/
