#include <iostream>
using namespace std;
int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin >> n;
		int a[n+5], b[n+5];
		for (int i=0; i<n; i++)	cin>>a[i];
		
		int j=0;
		b[0]=a[0]*a[1];
		b[n-1]=a[n-1]*a[n-2];
		
		for (int i=1; i<n-1; i++)
			b[i]=a[i-1]*a[i+1];
			
		for (int i=0; i<n; i++)	cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}
/*
2
5
2  3  4  5  6
6
9  7  12  8  6  5
*/
