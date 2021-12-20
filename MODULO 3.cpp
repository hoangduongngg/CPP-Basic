#include <iostream>
using namespace std;
typedef unsigned long long int ull;
int main() {
	int t; cin >>t;
	while (t--) {
		ull n,k; cin>>n>>k;
		ull s=0;
		for (int i=1; i<=n; i++)
			s+=i%k;
		cout<<s<<endl;
	}	
	return 0;
}
