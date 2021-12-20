#include <iostream>
using namespace std;
char s[100];
//void lowkey(s[]) {
	
//}

int main() {
	cin >> s;
	//lowkey(s[1]);
	cout << s[1];
	int space=0;
	for (int i=2; i<=strlen(s); i++)
	f (s[i]== ) space++;
	
	int dem=0;
	for (int i=2; i<=strlen(s); i++)
	if (s[i]==" ") {
		dem++;
		if (dem<space) {
		//	lowkey(s[i+1]);
			cout << s[i+1];
			}
		else {
			for ( int j=i+1; j<=strlen(s); j++) {
		//		lowkey(s[i]);
				cout << s[i];
			}
		}
	}
	cout<< "@ptit.edu.vn"
}
