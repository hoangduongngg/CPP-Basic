#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	int t; cin>>t;
	while (t--) {
		ll n; cin>>n;
		if ( n%10+((n/10)%10)*10 ==86 ) 
				cout<<1<<endl;
		else 	cout<<0<<endl;
	}
	return 0;
}
/* So may man: Kiem tra xem 2 so cuoi co phai 86 khong
3 
111539786 
123456789 
8686 

1
0
1
*/

