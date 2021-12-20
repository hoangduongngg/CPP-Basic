#include <bits/stdc++.h>
using namespace std;
/*
void change (string &s, char a, char b) {
	while (s.find("a")!=-1)
		s.replace( s.find("a"),1, "b");	
}
*/

void change_min(string &s1, string &s2) {
	while (s1.find("6")!=-1)
		s1.replace( s1.find("6"),1, "5");
	while (s2.find("6")!=-1)
		s2.replace( s2.find("6"),1, "5");
}
void change_max(string &s1, string &s2) {
	while (s1.find("5")!=-1)
		s1.replace( s1.find("5"),1, "6");
	while (s2.find("5")!=-1)
		s2.replace( s2.find("5"),1, "6");
}

bool Nhohon (string &s1, string &s2) {		// Ktra X<Y?
	if (s1.size()>s2.size()) return 0;
	if (s1.size()<s2.size()) return 1;
	for (int i=0; i<s1.size();i++) {		// chu so nao nho hon trc thi la nho hon
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
		string s1,s2;
		cin>>s1>>s2;
	
		change_min(s1,s2);
		cout<<Tong(s1,s2)<<" ";
		
		change_max(s1,s2);
		cout<<Tong(s1,s2)<<endl;
	}
	return 0;
}
/*
2
645  666
5466 4555
*/
