#include <iostream>
using namespace std;
int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin >> n;
		long long a[n+5], b[n+5];
		
		int j=0, dem=0;
		for (int i=0; i<n; i++) {
			cin>>a[i];
			if (a[i]!=0) {
				b[j]=a[i];
				j++;
			}
			else dem++;
		}
		for (int i=0; i<j; i++) cout<<b[i]<<" ";
		for (int i=0; i<dem; i++) cout<<0<<" ";
		
		cout<<endl;
	}
	return 0;
}

/*
2

7

1  2 0  0  0  3  6

6
0  1  0  2  0  3
*/
