#include <iostream>
using namespace std;
typedef unsigned long long ull;

bool Fibonaci (int x) {
    ull f[100];
    f[0]=0, f[1]=1;
    if (x==0 || x==1) return 1;
    int i=2;
    while (1) {
        f[i]=f[i-1]+f[i-2];
        if (f[i]<x) i++;
        else if (f[i]==x) return 1;
        else return 0;
    }
}

int main()
{
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int a[n+5];
        for (int i=0; i<n; i++) {
            cin>>a[i];
            if (Fibonaci(a[i])) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
