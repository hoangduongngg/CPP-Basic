#include <iostream>
#include <string>
using namespace std;

void Erase_Space_01 (string &s) {		//Xoa khoang trang thua o dau/cuoi
	while (s[0]==' ' || s[0]=='\n' || s[0]=='\t') 
		s.erase(0,1);				//Dau
	while (s[ s.size()-1]==' ' || s[ s.size()-1]=='\n' || s[ s.size()-1]=='\t') 
		s.erase( s.size()-1 ,1);	//Cuoi
	
}

void Erase_Space_02 (string &s) {		// Xoa khoang trang giua 2 tu neu nhieu hon 1 khoang trang
	int i=0;
	while (i<s.size()) {
		if ((s[i]==' ' || s[i]=='\n' || s[i]=='\t') && (s[i-1]==' ' || s[i-1]=='\n' || s[i-1]=='\t')) {
			s.erase(i,1);
			--i;
		}
		++i;
	}
}

long long So_Tu (string s) {
	Erase_Space_01 (s);
	Erase_Space_02 (s);
	long long count=0;
	for (int i=0; i<s.size(); i++) {
		if (s[i]==' ' || s[i]=='\n' || s[i]=='\t') count++;
	}
	return count+1;
}

int main() {
	int t; cin>>t;
	while (t--) {
		cin.ignore();
		string str;
		getline(cin, str);
		cout<<So_Tu(str)<<endl;
	}
	return 0;
}
/*
dem so tu
2
Print the number of words
Print the number of words present in the string
*/
