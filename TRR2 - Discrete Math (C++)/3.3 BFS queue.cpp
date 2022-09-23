#include <bits/stdc++.h>
#define MAX 100
using namespace std;
int n, a[MAX][MAX];
bool chuaxet[MAX];

void readdata() {
	cin>>n;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			cin>>a[i][j];
}

void init() {
	for (int i=1; i<=n; i++)
		chuaxet[i]=1;
}

void BFS(int u) {
	init();
	queue <int> q;
	q.push(u);
	cout<<u<<" ";
	chuaxet[u]=0;
	
	while (!q.empty()) {
		int t=q.front();
		q.pop();
		
		for (int i=1; i<=n; i++)
			if (chuaxet[i] && a[t][i]) {
				cout<<i<<" ";
				chuaxet[i]=0;
				q.push(i);
				//break;
			}
	}
}

int main() {
	readdata();
	BFS(1);
	return 0;
}
/*
BFS duyet tat ca cac dinh cua do thi, bat dau tu dinh u

11
0 1 1 0 0 0 1 1 0 0 0
1 0 0 1 0 0 1 1 0 0 0
1 0 0 0 1 0 0 1 1 0 0
0 1 0 0 0 1 0 1 1 0 0
0 0 1 0 0 0 0 0 1 1 0
0 0 0 1 0 0 0 0 1 1 0
1 1 0 0 0 0 0 0 0 0 0
1 1 1 1 0 0 0 0 0 0 1
0 0 1 1 1 1 0 0 0 0 0
0 0 0 0 1 1 0 0 0 0 0
0 0 0 0 0 0 0 1 0 0 0

1 2 3 7 8 4 5 9 11 6 10
*/
