#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

bool Chia_het_11(string s) {
	ll res=0; 		// result = tong cac chu so vi tri chan - tong cac chu so vi tri le
		for (ll i=0; i<s.size(); ++i) {
			int temp=s[i]- '0' ;		//chuyen dang ki tu sang dang so
			if (i%2==0) 	res+= temp ;		
			else			res-= temp;
		}
	if (res%11==0) return 1;
	return 0;
}
int main() {
	int t; cin>>t;
	while (t--) {
		string N; cin>>N;
		cout<<Chia_het_11(N)<<endl;
	}
	return 0;
}

//Idea: so chia het 11: tong cac vi tri chan - tong cac vi tri le chia het 11
