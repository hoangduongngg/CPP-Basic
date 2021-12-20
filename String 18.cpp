#include <iostream>
#include <string>
using namespace std;

int main () {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		string s1="100";
		long long dem=0;
		while (s.find(s1)!=-1) {
			dem+=s1.size();
			s.erase(s.find(s1),s1.size());
		}
		cout<<dem<<endl;
	}
}
