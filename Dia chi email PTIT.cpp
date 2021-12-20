#include <iostream>
using namespace std;

void Mail(char s[]) {
	//Lowkey + Dem khoach trong
	int i=0, space =0;
	while (s[i]!='\0') {
		if (s[i]>='A' && s[i]<='Z') s[i]+=32;
		if (s[i]==' ') space++;
		i++;
	}
	//in ten
	i=0;
	int dem=0;
	while (s[i]!='\0'){
		if (s[i]==' ') {
			dem++;
			i++;
		}
		
		if (dem==space) 
			while (s[i]!='\0') {
				cout << s[i];
				i++;
			}
			
		if (s[i]!='\0') i++;
	}
	//in chu dau cua ho + ten dem
	dem=i=0;
	cout <<s[0];
	while (dem<space-1)	{  // vi du co 3 space thi dem<2, tuc la in ra dem 2 lan 0 va 1, in ra 2 ki tu
		if (s[i]==' ') {
			dem++;
			cout<<s[i+1];
		}
		i++;	
	}
	
	cout<<"@ptit.edu.vn";
}

int main() {
	char s[100];
	cin.getline(s,100);
	Mail(s);
	return 0;
}
