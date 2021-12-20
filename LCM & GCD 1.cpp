#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
 
ll LCM(ll a, ll b) {
	return a*b/__gcd(a,b);
}
int main() {
	int t; cin >>t;
	while (t--) {
		ll a,b;
		cin>>a>>b;
		cout<<LCM(a,b)<<" "<<__gcd(a,b)<<endl;
	}
	return 0;
}
