// so co m chu so va tong cs = s
#include <iostream>
#include <string.h>
using namespace std;

string Nho_nhat(int m, int s) {
    string n="";
    while (s>9) {
        n+='9';
        s-=9;
    }
    if (m<n.length() || m==n.length() && s>0) n="-1";

    else if (m- n.length()==1) {
        char temp= s+'0' ;
        n=temp+n;
    }
    else {
        char temp1=(s-1)+'0';
        n=  temp1 + n ;
        string temp2 = "1";
        for (int i=0; i < m-n.length()-1; i++) temp2+='0';
        n= temp2 +n;
    }
    return n;
}

string Lon_nhat (int m, int s) {
    string n="";
    while (s>9) {
        n+='9';
        s-=9;
    }
    if (m<n.length() || m==n.length() && s>0) n="-1";

    else if (m- n.length()>=1) {
        n+= s+'0';
        int l=n.length();
        for (int i=0; i < m-l; i++) n+='0';
    }
    return n;
}

int main()
{
    int m,s; cin>>m>>s;
    cout<<Nho_nhat (m,s)<<" "<<Lon_nhat (m,s);
    return 0;
}

// 5 15
// 10059 96000

