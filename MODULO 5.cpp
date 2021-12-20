#include <iostream>
#include <string.h>
#define MAX 1001
using namespace std;
typedef unsigned long long int ull;

void TimK(string a, ull m) {
	ull res=0, s[MAX];
		
	for (int i=0;i< a.size(); i++)
		s[i]=a[i]-'0';			// chuyen kieu du lieu tu char sang int
	for (int i=0; i<a.size(); i++)
		res= (res*10+s[i]) %m;		// cach chia giong phep chia tieu hoc 
	
	cout<<res<<endl;
}
int main() {
	int t; cin >>t;
	while (t--) {
		string a;	cin>>a;
		ull m; 		cin>>m;
		TimK(a,m);
	}	
	return 0;
}
