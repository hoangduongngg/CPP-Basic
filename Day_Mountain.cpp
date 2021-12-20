#include <iostream>
using namespace std;

bool Mountain (int a[], int L, int R) {
    //if (a[L]>a[L+1] || a[R]>a[R-1]) return 0; Nop day full tang/full giam cung AC
    int i=L;
    while (i<R) {
        if (a[i]>a[i+1]) break;
        i++;
    }
    while (i<R) {
        if (a[i]<a[i+1]) return 0;
        i++;
    }
    return 1;
}

int main()
{
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int a[n+2];
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        int L,R; cin>>L>>R;
        if (Mountain(a,L,R)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
