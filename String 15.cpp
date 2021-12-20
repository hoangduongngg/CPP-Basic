#include <iostream>
#include <string>
using namespace std;

long long Dem_Xau_Con (string s) {		//dem xau con dau cuoi giong nhau
	int dem=s.size();
	for (int i=0; i<s.size()-1;i++)
		for (int j=i+1; j<s.size();j++)
			if (s[i]==s[j]) dem++;
	return dem;
	
}

int main () {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		cout<<Dem_Xau_Con(s)<<endl;
	}
}
