#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool Nhohon (string &s1, string &s2) {		// Ktra X<Y?
	if (s1.size()>s2.size()) return 0;
	if (s1.size()<s2.size()) return 1;
	for (int i=0; i<s1.size();i++) {		// so nao nho hon trc thi la nho hon
		if (s1[i]>s2[i]) return 0;
		if (s1[i]<s2[i]) return 1;
	}
	return 1;
}

string Tong(string s1, string s2) {
	if (!Nhohon(s1,s2)) swap(s1,s2);
	
	string res="";
	reverse (s1.begin(), s1.end());
	reverse (s2.begin(), s2.end());
	
	//77921 + 87900 : s2+s1
	for (int i=s1.size(); i<s2.size(); i++) 	// bu cac phan tu trong
		s1.push_back('0');
	
	int cache=0;
	for (int i=0; i<s2.size(); i++) {
		int tmp= (s2[i]-'0') + (s1[i]-'0') + cache;
		if (tmp<10)	cache=0;
		else {
			cache=1;
			tmp-=10;
		}
		res.push_back(tmp+'0');
	}
	if (cache==1) res.push_back('1');
	reverse(res.begin(), res.end());
	return res;
}

int main() {
	int t; cin >>t;
	while (t--) {
		string s1,s2;	//X<Y
		cin>>s1>>s2;
		cout<<Tong(s1,s2)<<endl;
		
	}
	return 0;
}
