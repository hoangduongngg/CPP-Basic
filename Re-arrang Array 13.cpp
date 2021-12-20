#include <bits/stdc++.h>
using namespace std;

void Sort_Arr(int a1[],int n, int a2[], int m) {
	sort (a1,a1+n);
	int min=a1[0]-1;		//mot so nho hon all cac so trong day. neu de la -1 van WA vi de test so am =))))
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++) {
			if (a2[i]<a1[j]) break;		//cac so sau lon hon
			if (a2[i]==a1[j]) {
				cout<<a1[j]<<" ";
				a1[j]=min;		// danh dau la da in ra
			}
		}
	// in cac so con lai
	for (int j=0; j<n; j++)
		if (a1[j]>min) cout<<a1[j]<<" ";
	cout<<endl;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int n,m;
		cin>>n>>m;
		int a1[n+5], a2[m+5];
		for (int i=0; i<n; i++) cin>>a1[i];
		for (int i=0; i<m; i++) cin>>a2[i];
		
		Sort_Arr(a1,n,a2,m);
	}
	return 0;
}
/*
2
11 4
2 1 2 5 7 1 9 3 6 8 8
2 1 8 3

11 4
2 1 2 5 5 1 9 3 3 8 8
2 1 8 3
*/
