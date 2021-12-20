#include <iostream>
#include <string>
using namespace std;
const int mod = 1e9+7;

int main () {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		long long dem=0;	
		//long long sum=0;		
		for (int i=0; i<s.size(); i++) {
			int so=0;
			while (s[i]>='0' && s[i]<='9') {
				so=(so*10+(s[i]-'0'))%mod;
				i++;
			}
			if (so>0) dem++;
			//sum=.......
		}
		cout<<dem<<endl;
		//cout<<sum<<endl;
	}
}
/*
4
1abc23
geeks4geeks
1abc2x30yz67
123abc
*/
