#include <iostream>
using namespace std;
typedef unsigned long long ull;
int main() {
	int t; cin>>t;
	if (t<=10)
		while (t--) {
			ull n; cin>>n;
			ull T=n*(n+1)/2;
			cout<<T<<endl;
		}
	return 0;
}
