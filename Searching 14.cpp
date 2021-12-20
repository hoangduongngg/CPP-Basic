#include <iostream>
using namespace std;

bool check (int a[], int n, int x) {		//check xem x da xuat hien chua
	for (int i=0; i<n; i++)
		if (a[i]==x) return 1;
	return 0;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n; cin>>n;
		int a[n+5], b[n+5];
		int k=0;
		for (int i=0; i<n; i++) cin>>a[i];
		
		for (int i=0; i<n; i++)
			if (check(b,k,a[i])) {
				cout<<a[i]<<endl;
				break;
			}
			else {
				b[k]=a[i];
				k++;
			}
		if (k==n) cout<<-1<<endl;
	}
	return 0;
}

/*
2
5
4 5 1 2 1
6
10 20 30 30 20 5 7
*/
