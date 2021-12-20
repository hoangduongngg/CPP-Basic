#include <iostream>
#include <string>
using namespace std;
const int mod = 1e9+7;

int main () {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		long long max=0;			
		for (int i=0; i<s.size(); i++) {
			int so=0;
			while (s[i]>='0' && s[i]<='9') {
				so=(so*10+(s[i]-'0'))%mod;
				i++;
			}
			if (so>max) max=so;
		}
		cout<<max<<endl;
	}
}
