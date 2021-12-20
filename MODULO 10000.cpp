#include <iostream>
using namespace std;

int Tim_X (int a, int m) {
	for (int i=0; i<m; i++)
	if((a*i)%m==1)
		return i;
	return -1;	// khong co gia tri thoa man
}

int main() {
	int  t; cin>>t;
	while (t--) {
		int a,m;
		cin>>a>>m;
		cout<<Tim_X(a,m)<<endl;
	}
	return 0;
}
