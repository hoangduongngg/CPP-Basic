#include <bits/stdc++.h>
using namespace std;

void Dao_xau (string s) {
	int stop=s.size();
	for (int i=s.size()+1; i>0; i--) {
			if (s[i]==' ') {
				for (int j=i+1; j<stop; j++)
					cout<<s[j];
				stop=i;
				cout<<" ";
			}
	}
	for (int j=0; j<stop; j++)
		cout<<s[j];
	cout<<endl;
}

int main () {
	int t; cin>>t;
	cin.ignore();
	while (t--) {
		string str;
		getline(cin, str);
		Dao_xau(str);
	}
}
/*
2
I like this program very much
much very program this like I
*/
