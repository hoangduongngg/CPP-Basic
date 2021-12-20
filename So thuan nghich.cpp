#include <bits/stdc++.h>
using namespace std;

bool STN (string s) {	//So thuan nghich
	for (int i=0; i<s.size()/2; i++)
		if (s[i]!=s[s.size()-1-i])
			return 0;
	return 1;
}
int main() {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		if (STN(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

/* So thuan nghich lat nguoc lai thi khong doi gia tri
2
123456789012345
12345678987654321

NO
YES
*/
