#include<bits/stdc++.h>
#define MAX 100
using namespace std;

void Con_Ran (int a[MAX][MAX], int n) {
	for (int i=0; i<n; i++) {
		if (i%2==0)
			for (int j=0; j<n; j++)
				cout<<a[i][j]<<" ";
		if (i%2==1)
			for (int j=n-1; j>=0; j--)
				cout<<a[i][j]<<" ";
	}
	cout<<endl;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		int a[MAX][MAX];
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				cin>>a[i][j];
				
		Con_Ran (a,n);
	}
	return 0;
}
/*In cac phan tu thuoc theo hinh CON RAN
2
3
45 48 54 21 89 87 70 78 15
2
25 27 23 21
*/
