#include <iostream>
using namespace std;
typedef unsigned long long int ull;
int main() {
	int t; cin >>t;
	while (t--) {
		ull a,b,c; cin>>a>>b>>c;
		cout<<((a%c)*(b%c))%c;
	
	}
	
	return 0;
}
