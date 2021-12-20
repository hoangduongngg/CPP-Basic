#include <iostream>
#include <string.h>
using namespace std;

string Xoa_084 (string s) {
    int n=s.length();
    s.erase(s.find("084"),3);
return s;
}
int main()
{
    int t; cin>>t;
    while (t--) {
        string s;
        cin>>s;
        cout<<Xoa_084(s)<<endl;
    }
    
    
    return 0;
}
