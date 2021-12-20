#include<bits/stdc++.h>
#define MAX 100
using namespace std;

void Matrix_10 (int a[MAX][MAX], int n, int m) {
	int b[MAX][MAX]={0};				
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if (a[i][j]==1) {
				for (int k=0; k<n; k++) b[k][j]=1;
				for (int k=0; k<m; k++) b[i][k]=1;
			}
			
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}	
	
	cout<<endl;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n,m; cin>>n>>m;
		int a[MAX][MAX];
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				cin>>a[i][j];
		Matrix_10 (a,n,m);
	}
	return 0;
}
/*if A[i][j]=1 thi cac so hang i va cot j deu bang 1
2
2 3
0 0 0 
0 0 1
3 4
1 0 0 1 
0 0 1 0 
0 0 0 0
*/
