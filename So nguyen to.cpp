#include <iostream>
using namespace std;

bool SNT(int n) {
	if (n==2) return true;
	if (n<2|| !(n%2)) return false; // n chan khong nguyen to -> toi uu
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return false;
	return true;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >>n;
		if (SNT(n)) cout<<"YES";
		else cout<<"NO";
		cout <<endl;
	}
}
