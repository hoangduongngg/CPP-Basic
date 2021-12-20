#include <iostream>
#include <math.h>
#define MAX 100001
using namespace std;
typedef unsigned long long ull;
int a[MAX], b[MAX];
int n,m;

void readdata() {
	cin>>n>>m;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<m; i++) cin>>b[i];
}

void Count (int a[MAX], int n, int b[MAX], int m) {		//dem so cap x^y > y^x
	int dem=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) {
			ull k= pow(a[i],b[j]);
			ull l= pow(b[j],a[i]);
			if (k>l) dem++;
		}
	cout<<dem<<endl;
}

int main() {
	int t; cin>>t;
	while (t--) {
		readdata();
		Count(a,n,b,m);
		cout<<endl;
	}
	return 0;
}


/*
1
3 2
2 1 6
1 5
*/
