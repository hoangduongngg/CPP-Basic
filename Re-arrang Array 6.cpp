#include <iostream>
using namespace std;

void Hop_le(int a[], int n) {		// Hop le theo de bai
	for (int i=1; i<n; i++)
		if (a[i]==a[i-1]) {
			a[i-1]*=2;
			a[i]=0;
		}	
}

void Chuyen_0 ( int a[], int n) {		//chuyen cac so 0 ve duoi
	Hop_le(a,n);
	int b[n+5];
	int j=0, dem=0;
	for (int i=0; i<n; i++)
		if (a[i]!=0) {
			b[j]=a[i];
			j++;
		}
		else dem++;
		
		for (int i=0; i<j; i++) cout<<b[i]<<" ";
		for (int i=0; i<dem; i++) cout<<0<<" ";
		
		cout<<endl;
}
int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin >> n;
		int a[n+5];
		
		int j=0, dem=0;
		for (int i=0; i<n; i++)
			cin>>a[i];
			
		Chuyen_0 (a,n);
	}
	return 0;
}

/*
2
6
2  2  0  4  0  8
10
0  2  2  2  0  6  6  0  0  8
*/
