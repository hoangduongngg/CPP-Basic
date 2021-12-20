#include <iostream>
#include <algorithm>
#define MAX 2000001
typedef long long ll;
using namespace std;
ll a[MAX], b[MAX], c[MAX];
int n,m;

void readdata() {
	cin>>n>>m;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		c[i]=a[i];
	}
	for (int i=0; i<m; i++) {
		cin>>b[i];
		c[i+n]=b[i];
	}
}

void Solve(ll c[]) {
	for (int i=0; i<n+m-1; i++)
		for (int j=i+1; j<n+m; j++)
			if (c[j]<c[i]) swap(c[i], c[j]);
			
	for (int i=0; i<n+m; i++)
		cout<<c[i]<<" ";
	cout<<endl;
}

int main() {
	int t; cin>>t;
	while (t--) {
		readdata();
		Solve(c);
	}
	return 0;
}

