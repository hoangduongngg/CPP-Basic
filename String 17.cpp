#include <iostream>
#include <string>
using namespace std;

void Ki_tu_khong_lap (string s) {		//dem xau con dau cuoi giong nhau
	int dem=s.size();
	int check[100]={0};
	for (int i=0; i<s.size()-1;i++)
		for (int j=i+1; j<s.size();j++)
			if (s[i]==s[j])
				check[(int) (s[i]-'0')]=1;		//danh dau la da bi lap

	for (int i=0; i<s.size();i++)
		if (check[(int) (s[i]-'0')]==0)
			cout<<s[i];

	cout<<endl;
}

int main () {
	int t; cin>>t;
	while (t--) {
		string s; cin>>s;
		Ki_tu_khong_lap(s);
	}
}
