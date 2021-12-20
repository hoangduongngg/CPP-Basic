#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin >>n;
		int a[n+5];
		int max;
		for(int i=0; i<n; i++)
			cin>>a[i];
		
		
		/*
		int i=0;
		while (i<n) {
			if (a[i]>a[i+1]) {
				max=a[i];
				break;
			}
			i++;
		}	
		cout<<max<<endl;
		*/
		
		sort(a,a+n);
		cout<<a[n-1]<<endl;
		
	}	
	return 0;
}
/*
1
5
1 2 7 4 3
*/
