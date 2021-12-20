#include <iostream>
#include <string.h>
#include <algorithm>
#include <math.h>
using namespace std;

int STC (string s) {		//chu so tan cung cua so thap phan
 	reverse(s.begin(), s.end()) ;
	int res=0;
	if (s[0]==1) res=1;
		
	int k;	//chu so tan cung cua
	while (s.find("1")!=-1) {
		int i=s.find("1");		// vi tri co so 1
		if (i%4==0) k=6;
		if (i%4==3) k=8;
		if (i%4==2) k=4;
		if (i%4==1) k=2;
		res+=k;
		res=res%10;
		s.replace(s.find("1"),1,"0");
	}
	return res;
 }

int main() {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		if (STC(s)==0 ||STC(s)==5) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

//chuyen thanh thap phan -> chia het cho 5: co duoi la 0 hoa 5

