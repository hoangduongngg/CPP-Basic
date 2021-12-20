#include <bits/stdc++.h>
using namespace std;

bool SNT(int n) {
	if (n==2) return 1;
	if (n<2 || n%2==0) return 0;
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return 0;
	return 1;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int L,R; cin >>L>>R;
		int dem=0;
		for (int i=L; i<=R; i++)
			if (SNT(i)) dem++;	
		cout<<dem<<endl;
	}	
	return 0;
}
/*
2
1 10
5 10
*/
