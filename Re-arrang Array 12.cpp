#include <iostream>
#include <algorithm>
using namespace std;

int Tich_max(int a[], int n) {		// tich lon nhat day con lien tuc
	sort(a,a+n);
	int res=1, max=1;
	for (int i=0; i<n; i++) {
		if (a[i]>0) res*=a[i];
		if (a[i]<0 && a[i+1]<0) {
			res=res*a[i]*a[i+1];
			i++;
		}
	}
//	for (int i=0; i<n; i++) cout<<a[i]<<" "<<endl;
	return res;
	
}
int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin >> n;
		int a[n+5];
		for (int i=0; i<n; i++)	cin>>a[i];
		
		cout<<Tich_max (a,n)<<endl;
			
			
		
	}
	return 0;
}
/*
3
5
6 -3 -10 0 2
6
2 3 4 5 -1 0 
10
8 -2 -2 0 8 0 -6 -8 -6 -1
*/
