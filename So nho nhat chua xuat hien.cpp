#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int a[n+2];
		for (int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		int res=1;
		for (int i=0; i<n; i++) {
			if (a[i]==res) res++;
		}
		cout<<res<<endl;
	}
}

/* So nguyen duong nho nhat chua xuat hien trong mang
2
5
1 2 3 4 5
5
0 -10 1 3 -20

6
2
*/
