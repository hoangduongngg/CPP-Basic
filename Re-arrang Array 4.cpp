#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin >> n;
		int a[n+5];
		for (int i=0; i<n; i++)	cin>>a[i];
		
		sort(a,a+n); // 1 2 3 7 8 9 10
		if (n%2==0) {
			for (int i=0; i<n/2; i++)
				cout<<a[i]<<" "<<a[n/2+i]<<" "; // 1 7 2 8 3 9
		}
		else {
			for (int i=0; i<n/2; i++)
				cout<<a[i]<<" "<<a[n/2+1+i]<<" ";// 1 8 2 9 3 10 7
			cout<<a[n/2];
		}
		cout<<endl;
	}
	return 0;
}
/*
2
4
1  2  2 1
3
1  3  2





3
4
1  5  2  7
6
1  3  2  7  9  8
7
1 2 3 7 8 9 10
*/
