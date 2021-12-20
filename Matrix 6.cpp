#include<bits/stdc++.h>
using namespace std;
#define MAX 100

void In_bien (int a[MAX][MAX], int n) {
	for (int i=0; i<n; i++) cout<<a[0][i]<<" ";
		cout<<endl;
	for (int i=1; i<n-1; i++) {
		cout <<a[i][0]<<" ";
		for (int j=1; j<n-1; j++) cout<<"  ";
		cout <<a[i][n-1];
		cout<<endl;
	}
	for (int i=0; i<n; i++) cout<<a[n-1][i]<<" ";
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
		In_bien(a,n);
	}
	return 0;
}
/*In cac phan tu thuoc vung bien
2
4
1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8
3
45 48 54 21 89 87 70 78 15
*/
