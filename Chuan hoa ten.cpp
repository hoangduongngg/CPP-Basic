#include <iostream>
#include <string.h>
using namespace std;

void Lower_Case (string &s) {
	int i=0;
	while (i<s.size()) {
		if (s[i]>='A' && s[i]<='Z') s[i]+=32;
		i++;
	}
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

string Chuan_Hoa(string &s) {
	Lower_Case (s);
	Erase_Space_02 (s);
	//Dem khoach trang
	int i=0, space =0;
	while (i<s.size()) {
		if (s[i]==' ') space++;
		i++;
	}
	//in HOA ten
	i=0;
	int dem=0;
	while (i<s.size()){
		if (s[i]==' ') {
			dem++;
			if (dem==space) s.insert(i,",");		//them dau ,
			i++;
		}
		if (dem==space) 
			while (i<s.size()) {
				s[i]-=32;
				i++;
			}
		i++;
	}
	//in HOA chu dau cua ho + ten dem
	dem=i=0;
	s[0]-=32;
	while (dem<space-1)	{  // - 1 vi tu cuoi cung da in hoa o tren
		if (s[i]==' ') {
			dem++;
			s[i+1]-=32;
		}
		i++;
	}
	
	return s;
}

int main() {
	string str;
	getline (cin, str);
	cout<<	Chuan_Hoa(str);
	return 0;
}

// Input: ngUyeN   vAN Nam
