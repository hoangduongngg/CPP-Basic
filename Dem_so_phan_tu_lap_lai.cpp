#include <iostream>
#define MAX 100000
using namespace std;

int So_phan_tu_lap_lai (int a[], int n) {
    int check[MAX]={0}, res=0;
    for (int i=0; i<n; i++) {
        if (check[a[i]]==0) {
            check[a[i]]=1;
        }
        else if (check[a[i]]==1) {
            res+=2;
            check[a[i]]++;
        }
        else res++;
    }
    return res;
}

int main()
{
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int a[n+5];
        for (int i=0; i<n; i++) cin>>a[i];
        cout<<So_phan_tu_lap_lai(a,n)<<endl;
    }    
    return 0;
}
