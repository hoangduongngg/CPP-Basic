#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
typedef unsigned long long ull;
int a[MAX],n,k;

void readdata() {
	cin>>n>>k;
	for (int i=0; i<n; i++) cin>>a[i];
}

void Dem_Cap (int a[MAX], int n,int k) {		//dem so cap hieu nho hon k
	ull dem=0;
	sort(a,a+n);
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[j]<a[i]+k) dem++;
			else break;
		
	cout<<dem<<endl;
}

int main() {
	int t; cin>>t;
	while (t--) {
		readdata();
		Dem_Cap(a,n,k);
	}
	return 0;
}


/*
2
4 3
1 10 4 2
3 5
2 3 4
*/
