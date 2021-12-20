#include <bits/stdc++.h>
using namespace std;

bool Ktra (string s, int k) {
	if (s.size()<26) return 0;		//bang chu cai co 26 ki tu
	
	int check[100]={0};
	int dem=0; 	//dem so ki tu khac nhau co trong xau
	for (int i=0; i<s.size(); i++)
		check[(int) (s[i]-'0')]=1;		//danh dau la ki tu do da xuat hien
	
	for (int i=0; i<100;i++)
		if (check[i]) {
			dem++;		// neu co mat thi dem 1
			check[i]=0;	// chuyen ki tu do coi nhu da xet de khong bi trung
		}
	
	if (26-dem-k>0) return 0;
	return 1;
}

int main() {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		int k; cin>>k;
		cout<< Ktra(s,k)<<endl;
	}
	return 0;
}
/*
2
qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
4
qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
24
*/
