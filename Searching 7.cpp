#include <iostream>
#include <algorithm>
using namespace std;
bool comp (int a, int b) {
	return a>b;
}
void Max_k_Phan_tu(int a[], int n, int k) {
	sort (a,a+n, comp);
	for (int i=0; i<k;i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n,k; cin>>n>>k;
		int a[n+2];
		for (int i=0; i<n; i++) cin>>a[i];
		
		Max_k_Phan_tu(a,n,k);
	}
	return 0;
}
/*
2
5 3

10 7 9 12 6

6 2

9 7 12 8 6 5
*/

/*
	neu de la in ra cac so lon nhat khac nhau:
	cout<<a[0]<<" ";
	int dem=1;
	for (int i=1; i<n; i++) {
		if (a[i]!=a[i-1]) {
			cout<<a[i]<<" ";
			dem++;
		}
		if (dem==k) break;
	}
	*/
