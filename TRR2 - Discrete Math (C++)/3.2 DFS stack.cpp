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

void DFS(int u) {
	init();
	stack <int> s;
	s.push(u);
	cout<<u<<" ";
	chuaxet[u]=0;
	
	while (!s.empty()) {
		int t=s.top();
		s.pop();
		
		for (int i=1; i<=n; i++)
			if (chuaxet[i] && a[t][i]) {
				cout<<i<<" ";
				chuaxet[i]=0;
				s.push(t);
				s.push(i);
				break;		// chi lay 1 t
			}
	}
}

int main() {
	readdata();
	DFS(1);
	return 0;
}

/*
DFS duyet tat ca cac dinh cua do thi, bat dau tu dinh u

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


1 2 4 6 9 3 5 10 8 11 7
*/
