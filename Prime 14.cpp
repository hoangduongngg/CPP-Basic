#include <iostream>
using namespace std;
bool SNT(int n) {
	if (n==2) return 1;
	if (n<2|| !(n%2)) return 0;
	for (int i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}

int main() {
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		for (int i=2; i*i<=n; i++)
			if (SNT(i)) cout<<i*i<<" ";
		cout<<endl;
	}
}

