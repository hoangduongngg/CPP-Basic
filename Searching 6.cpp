#include <iostream>
#include <math.h>
using namespace std;
typedef long long ll;

ll Min_Tong_Abs (int a[], int n) {		//tim so nho nhat va nho thu 2
	ll min = (a[0]+a[1]);
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if ( abs(a[i]+a[j]) < abs (min))
				min=a[i]+a[j];
	return min;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int a[n+2];
		for (int i=0; i<n; i++) cin>>a[i];
		
		cout<<Min_Tong_Abs(a,n)<<endl;
	}
	return 0;
}
/*
2
3
-8 -66 -60 
6
-21 -67 -37 -18 4 -65
*/
