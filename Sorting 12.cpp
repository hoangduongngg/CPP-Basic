#include <iostream>
#define MAX 1000001
using namespace std;
typedef long long ll;
int n,m;
ll a[MAX], b[MAX];

void readdata() {
	cin>>n>>m;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<m; i++) cin>>b[i];
}

ll Max(ll a[]) {
	ll max=a[0];
	for (int i=1; i<n; i++)
		if (a[i]>max) max=a[i];
	return max;
}

ll Min(ll b[]) {
	ll min=b[0];
	for (int i=1; i<m; i++)
		if (b[i]<min) min=b[i];
	return min;
}

int main() {
	int t; cin >>t;
	while (t--) {
		readdata();
		cout<<Max(a)*Min(b)<<endl;
	}
	return 0;
}
