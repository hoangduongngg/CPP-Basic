#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s; //vi n qua lon nen nhap bang kieu string, 1 day so
		int l=s.size();
		int x=-1,y=-1;	//2 vi tri can swap
			
		for (int i=l-2; i>=0; i--)
			if (s[i]>s[i+1]) {
				x=i;		//vi tri dau tien ma cs trc lon hon cs sau , 2413357, x=1
				break;
			}
		
		for (int i=l-1; i>x; i--) {
			if (s[i]<s[x]) {
				if (y==-1)	y=i;	// 2413357, x=1, y=4
				else if (s[y]==s[i]) y=i;		//2413357, x=1, y=3, lay y la so gan x hon thi se lon hon
			}
		}
		
		if (x==-1) cout<<-1; // n la mot day so cac cs tang dan - khong swap duoc
		if  (y>-1) {
			swap(s[x], s[y]);
			cout<<s;
		}
		cout<<endl;
	}
	return 0;
}

/*
2
12435
12345
*/

/* idea: tim vi tri dau tien tu cuoi len ma so do tang,
 tu vi tri do tim quay lai vi tri dau tien ma lon hon so do, 
 thi swap voi vi tri trc do
 vd: 2413357 - 2314357
*/
