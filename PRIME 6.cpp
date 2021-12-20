#include <iostream>
using namespace std;
bool SNT(int n) {
	if (n==2) return 1;
	if (n<2 || n%2==0) return 0;
	// khong xet n <=2 va n chan vi ben duoi chi xet so le
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return 0;
	return 1;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		for (int i=2; i<=n/2; i++)	
			if (SNT(i) && SNT(n-i)) {
				cout<<i<<" "<<n-i;
				break;
			}
	cout<<endl;
	}
}
/*
2
74
1024
*/

