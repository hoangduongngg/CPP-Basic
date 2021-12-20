#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;
int t, n, a[MAX];

void readdata() {
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>a[i];
}

void SortDown(int a[]) {
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[j]>a[i]) swap(a[i],a[j]);		
}

void Solve(int a[]) {
	SortDown(a);
	for (int i=0; i<n/2; i++)
		cout<<a[i]<<" "<<a[n-1-i]<<" ";
	if (n%2>0) cout << a[n/2];
	
 	cout<<endl;
}

int main() {
	cin >>t;
	while (t--) {
		readdata();
		Solve(a);	
	}
	return 0;
}
