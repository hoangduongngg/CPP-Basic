#include <iostream>
#define MAX 101
using namespace std;
int t, n,k, a[MAX];

void readdata() {
	cin>>n>>k;
	for (int i=0; i<n; i++)
		cin>>a[i];
}

int DemK(int a[]) {
	int dem=0;
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]+a[j]==k) dem++;
	return dem;	
}

int main() {
	cin >>t;
	while (t--) {
		readdata();
		cout<<DemK(a)<<endl;
	}
	return 0;
}
