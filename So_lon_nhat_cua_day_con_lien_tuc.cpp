#include <iostream>
#include <algorithm>
using namespace std;

int Min_k (int a[], int n, int k, int i) {
    sort (a+i, a+i+k);
    return a[i+k-1];
}

int main()
{
    int t; cin>>t;
    while (t--) {
        int n,k; cin>>n>>k;
        int a[n+5];
        for (int i=0; i<n; i++) cin>>a[i];

        for (int i=0; i<n-(k-1); i++) {
            cout<<Min_k(a,n,k,i)<<" ";
        }
        cout<<endl;

    }
    return 0;
}

/* dang bi TLE
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13
*/