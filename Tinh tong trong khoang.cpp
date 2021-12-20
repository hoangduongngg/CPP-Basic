#include <iostream>
using namespace std;

void Tinh_tong_trong_khoang (int a[], int n, int L, int R) {
	int res=0;
	for (int i=L; i<=R; i++)
		res+=a[i];
	cout<<res<<endl;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n, k; cin>>n>>k;
		int a[n+2];
		for (int i=1; i<=n; i++)
			cin>>a[i];
	
		for (int i=1; i<=k; i++) {
			int L,R; cin>>L>>R;
			Tinh_tong_trong_khoang (a,n,L,R);
		}
	}
}

/* Tinh tong trong khoang, vi du 2-4 la cac so 1 2 1
1
9  3
1  1  2  1  3  4  5  2  8
1 5
2 4
3 5

8
4
6
*/
