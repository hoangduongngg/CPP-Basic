#include <iostream>
#include <algorithm>
using namespace std;

void Min_Min2 (int a[], int n) {		//tim so nho nhat va nho thu 2
	sort(a,a+n);
	int min2=a[0];
	int i;
	for (i=1; i<n; i++)
		if (a[i]!=a[0]) {
			min2=a[i];
			break;
		}
		
	if (i==n) cout<<-1<<endl;
	else cout<<a[0]<<" "<<min2<<endl;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int a[n+2];
		for (int i=0; i<n; i++) cin>>a[i];
		
		Min_Min2(a,n);
	}
	return 0;
}
/*
2
10
5 6 7 8 9 10 1 2 3 4
5
1 1 1 1 1
*/
