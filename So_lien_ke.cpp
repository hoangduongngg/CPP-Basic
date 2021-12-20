#include <iostream>
#include <math.h>
using namespace std;

bool So_lien_ke (string n) {
    for (int i=0; i<n.length()-1; i++) {
        int check = abs ((int)n[i+1] - (int) n[i]);
        if ( check!=1) return 0;
    }
    return 1;
}

int main()
{
    int t; cin>>t;
    while (t--) {
        string n; cin>>n;
        if (So_lien_ke(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
/*
3
123212
5654345676
10233211123

YES
YES
NO
*/