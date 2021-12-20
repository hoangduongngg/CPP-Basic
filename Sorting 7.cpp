#include <iostream>
#include <algorithm>
#define MAX 1000001
using namespace std;
int a[MAX],b[MAX], n;

void readdata() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		b[i]=a[i];
	}

}

void SortUp(int a[MAX], int n) {
	for (int i=1; i<n; i++)
		for (int j=i+1; j<=n; j++)
			if (a[j]<a[i]) swap(a[i],a[j]);
}

void LR (int a[MAX], int n) {
	SortUp (a,n);
	int L,R;
	for (int i=1; i<=n; i++)
		if (a[i]!=b[i]) {
			L=i;
			break;
		}
	for (int i=n; i>0; i--)
		if (a[i]!=b[i]) {
			R=i;
			break;
		}
	
	cout<<L<<" "<<R<<endl;
}


int main() {
	int t; cin>>t;
	while (t--) {
		readdata();
		LR(a,n);
		cout<<endl;
	}
	return 0;
}
