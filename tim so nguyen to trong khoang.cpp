#include <iostream>
using namespace std;
typedef unsigned long long int ull;

void swap(ull *a, ull *b) {
	ull temp=*a;
	*a=*b;
	*b=temp;
}

bool SNT(ull n) {
	if (n==2) return 1;
	if (n<2|| !(n%2)) return 0;
	for (int i=3; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}

int main() {
	ull a,b; cin>>a>>b;
	if (a>b) swap(a,b);
	for (int i=a; i<=b; i++)
		if (SNT(i)) cout<<i<<" ";
}

