#include <iostream>
#include <math.h>
using namespace std;

void Liet_ke_xau_nhi_phan(int n) {
	int a[n+2];
	for (int i=0; i<n; i++) {
		a[i]=0;
		cout<<a[i];
	}
	cout<<" ";
	
	for (int i=0; i<pow(2,n)-1; i++) {
		for (int i=n-1; i>=0; i--) {
			if (a[i]==0) {
				a[i]=1;
				for (int j=i+1; j<n; j++) a[j]=0;
				break;
			}
		}
		
		for (int i=0; i<n; i++)	cout<<a[i];
		cout<<" ";
	}
	cout<<endl;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		Liet_ke_xau_nhi_phan(n);
	}
	return 0;
}
/* Liet ke xau nhi phan
2
2
3

00  01  10 11
000 001 010 011 100 101 110 111
*/
