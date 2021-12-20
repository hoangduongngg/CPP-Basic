#include <iostream>
#include <string.h>
using namespace std;

bool Sap_dat_xau (string s) {
    int n= s.length();
    int check[200]={0};
    for (int i=0; i<n; i++) {
        int k= int (s[i]);
        check[k]++;
    }
    int max=0;  //ky tu xh nhieu nhat
    for (int i=int('a'); i<int('z'); i++) {
        if (check[i]>max) max=check[i];
    }
    if ((n%2==0 && max>n/2) || (n%2==1 && max>(n/2+1)) )return 0;
    return 1;

}

int main()
{
    int t; cin>>t;
    while (t--) {
        string s;
        cin>>s;
        cout<<Sap_dat_xau(s)<<endl;
    }
    return 0;
}
