#include <bits/stdc++.h>
#define MAX 100
int n, a[MAX];
using namespace std;

int main() {
	int t; cin >>t;
	while (t--) {
		cin >>n;
		for(int i=0; i<n; i++)
			cin>>a[i];
			
		sort(a,a+n);	
		int min=abs(a[1]-a[0]);
		for (int i=2; i<n; i++)
			if (abs(a[i]-a[i-1])<min)
				min=abs(a[i]-a[i-1]);
		
		cout<<min<<endl;	
	}	
	return 0;
}
/*
2
5
2 4 5 7 9
10
87 32 99 75 56 43 21 10 68 49
*/
