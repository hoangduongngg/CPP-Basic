#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Erase_Space_01 (string &s) {		//Xoa khoang trang thua o dau/cuoi
	while (s[0]==' ') 
		s.erase(0,1);				//Dau
	while (s[ s.size()-1]==' ') 
		s.erase( s.size()-1 ,1);	//Cuoi
	
}

void Erase_Space_02 (string &s) {		// Xoa khoang trang giua 2 tu neu nhieu hon 1 khoang trang
	int i=0;
	while (i<s.size()) {
		if (s[i]==' ' && s[i-1]==' ') {
			s.erase(i,1);
			--i;
		}
		++i;
	}
}

int main() {
	string s1,s2;
	getline (cin, s1);
	getline (cin, s2);

	s1.erase(s1.find(s2),s2.size());	//xoa xau con
	Erase_Space_01 (s1);
	Erase_Space_02 (s1);
	cout<<s1<<endl;
	return 0;
}
