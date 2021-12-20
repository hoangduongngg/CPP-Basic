#include <bits/stdc++.h>
using namespace std;

bool SLP (string s) {	//So loc phat
	for (int i=0; i<s.size(); i++)
		if (s[i]!='0' && s[i]!='8' && s[i]!='6' )
			return 0;
	return 1;
}
int main() {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		if (SLP(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

/* So loc phat la so co 0,6,8
3
181
88888
608868

NO
YES
YES
*/
