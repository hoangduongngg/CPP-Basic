#include <iostream>
#include <math.h>
using namespace std;

int Min(int m, int s) {
	int min=0;		//m>1
	int k=m;
	while (k--) {
		if (s>10) {
			min+=9*pow(10,m-k);
			s-=9;
		}
		else {
			min+=(s-1)*pow(10,m-k);
			s=1;
		}
	}
	return min;
}

int main() {
	int m,s;
	cin>>m>>s;
	if (m<1|| m*9>s || m>1 && s==0 || m>1 && s==1) cout<<"-1 -1";
	if (m==1 && s<10) cout << s<<" "<<s;
	else {
		cout<<Min(m,s);
	}
	
	return 0;
}
