#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;
int a[MAX], n;

void readdata() {
	cin>>n;
	for (int i=0; i<n; i++) cin >>a[i];
}	

int Khac_Nhau(int a[]) {		//dem cac so khac nhau, vi du 2 2 2 3 3 4 5, k=4
	sort(a,a+n);
	int k=1;
	for (int i=1; i<n; i++)
		if (a[i]!=a[i-1]) k++;
	return k;
}

int main() {
	int t; cin >>t;
	while (t--) {
		readdata();
		sort(a,a+n);
		cout<<(a[n-1]-a[0]+1)- Khac_Nhau(a)<<endl;		
	}
	return 0;
}
/*
3
5
4 5 3 8 6
3
2 1 3
7
2 4 2 2 3 3 5
*/

