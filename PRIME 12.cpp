#include <iostream>
#define MAX 100
#include <math.h>
using namespace std;
int main() {
	int t; cin >>t;
	while (t--) {
		int n,k; cin>>n>>k;
		int a[MAX];
		int j=0;
		while (n%2==0) {
			j++;
			a[j]=2;
			n/=2;
		}
		for (int i=3; i<=n; i+=2)			// khong phai sqrt vi bo sot truong hop n=3
			while (n%i==0) {
				j++;
				a[j]=i;
				n=n/i;	
			}
		if (n>1) a[j]=n;
		if (k<=j) cout <<a[k];
		else cout<<"-1";
		cout << endl;
	}
		return 0;
}
